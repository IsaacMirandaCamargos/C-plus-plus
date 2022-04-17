#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;
    int matriz[N][N], linha[N], coluna[N] ,resposta;

    for (int l = 0; l < N; l++)
    {
        for (int c = 0; c < N; c++)
        {
            cin >> matriz[l][c];
        }

        linha[l] = 0;
        coluna[l] = 0;
    }

    
    for (int i = 0; i < N; i++){
        for (int v = 0; v < N; v++)
        {
            linha[i] += matriz[i][v];
            coluna[i] += matriz[v][i];
        }

    }

    int max=0, temp;
    for (int l = 0; l < N; l++){
        for (int c = 0; c < N; c++){   
            temp = (linha[l] + coluna[c]) - (matriz[l][c]*2);

            if (temp > max){
                max = temp;
            }
        }
    }
    cout << max;
}
