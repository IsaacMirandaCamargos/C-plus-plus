#include <iostream> // cin e cout


using namespace std;

int main(){

    double valor1, valor2;

    cin >> valor1 >> valor2;


    cout.precision(2);
    cout.setf(ios::fixed);
    cout << valor1/valor2;

}

