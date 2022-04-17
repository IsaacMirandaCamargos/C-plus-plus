#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;
    int matriz[N][N];

    for (int l = 0; l < N; l++)
    {
        for (int c = 0; c < N; c++)
        {
            matriz[l][c] = 0;
        }
    }

    int temp;
    for (int i = 0; i < 2; i++)
    {
        for (int l = 0; l < N; l++)
        {
            for (int c = 0; c < N; c++)
            {
                cin >> temp;
                matriz[l][c] += temp;
            }
        }
    }

    for (int l = 0; l < N; l++)
    {
        for (int c = 0; c < N; c++)
        {
            cout << matriz[l][c] << " ";
        }
        cout << endl;
    }
}

/*
3
1 1 1
1 2 2
1 2 3
3 2 1
2 2 1
1 1 1
*/