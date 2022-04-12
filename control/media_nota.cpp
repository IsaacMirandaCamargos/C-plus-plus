#include <iostream> // cin e cout

using namespace std;

int main()
{

    double nota1, nota2;
    cin >> nota1 >> nota2;

    if((nota1+nota2)/2 >= 7){
        cout << "Aprovado";
    }else if((nota1+nota2)/2 < 7 and (nota1+nota2)/2 >= 4){
        cout << "Recuperacao";
    }else{
        cout << "Reprovado";
    }
}