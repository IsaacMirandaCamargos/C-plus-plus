#include <iostream>

using namespace std;


int main()
{
    int matriz[3][3];
    matriz[0][0] = 1;
    matriz[0][1] = 2;
    matriz[0][2] = 3;
    matriz[1][0] = 4;
    matriz[1][1] = 5;
    matriz[1][2] = 6;
    matriz[2][0] = 7;
    matriz[2][1] = 8;
    matriz[2][2] = 9;
    /* 1 2 3
       4 5 6
       7 8 9 */
    
    int matrix[3][3];
    for (int l = 0; l < 3; l++){
        for (int c = 0; c < 3; c++){
            matrix[l][c] = 3*l+1+c;
        }
    }
    for (int l = 0; l < 3; l++){
        for (int c = 0; c < 3; c++){
            cout << matriz[l][c] << " ";
        }cout << endl;
    }
    for (int l = 0; l < 3; l++){
        for (int c = 0; c < 3; c++){
            cout << matriz[l][c] << " ";
        }cout << endl;
    }
    
}
