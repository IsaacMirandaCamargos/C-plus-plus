#include <iostream> // cin e cout


using namespace std;

int main(){

    double raio;

    cin >> raio;


    cout.precision(6);
    cout.setf(ios::fixed);
    cout << raio*raio*3.14159 << endl;

}
