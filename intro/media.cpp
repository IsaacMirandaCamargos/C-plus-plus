#include <iostream> // cin e cout

using namespace std;

int main(){

  int num1, num2; // declaro as vari�veis inteiras

  cin >> num1 >> num2; // leio o que est� na tela e

  cout.precision(0);
  cout.setf(ios::fixed);
  cout << (num1+num2)/2; // imprimo

  return 0;
}
