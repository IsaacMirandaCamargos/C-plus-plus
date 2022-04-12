#include <iostream> // cin e cout

using namespace std;

// Comentario

/* Comentario
de varias
linhas*/

int main(){

    int x, y;
    cin >> x >> y;

    if (x % 2 == 0 and y % 2 == 0)
    {
        cout << "x e y sao par";
    }else if (x % 2 == 0)
    {
        cout << "somente x e par";
    }else if (y % 2 == 0)
    {
        cout << "somente y e par";
    }else{
        cout << "x e y sao impar";
    }
    
}