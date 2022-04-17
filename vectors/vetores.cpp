#include <iostream>

using namespace std;

int main(){

    int v[5]; // vetor de 5 dimensões, contagem da posição começa em 0.
    v[0] = 1;
    v[1] = 2;
    v[2] = 3;
    v[3] = 4;
    v[4] = 5;
    //cout << v[0] << endl;

    int v2[5] = {5,4,3,2,1};
    //cout << v2[0];

    for (int i = 0; i < 5; i++)
    {
        cout << v[i] + v2[i] << endl;
    }
    
    


}