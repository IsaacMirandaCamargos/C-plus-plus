#include <iostream>

using namespace std;

int main()
{
    int T, r = 0;
    cin >> T;
    int matriz[T][T];

    for (int l = 0; l < T; l++)
    {
        for (int c = 0; c < T; c++)
        {
            cin >> matriz[l][c];
        }
    }
    cout << endl;

    int soma = 0, temp;
    for (int l = 0; l < T; l++)
    {
        temp = 0;
        for (int c = 0; c < T; c++)
        {
            temp += matriz[l][c];
        }
        if (soma == 0)
        {
            soma = temp;
        }
        else if (soma != temp)
        {
            r = -1;
        }
    }
    for (int c = 0; c < T; c++)
    {
        temp = 0;
        for (int l = 0; l < T; l++)
        {
            temp += matriz[l][c];
        }
        if (soma != temp)
        {
            r = -1;
        }
    }
    temp = 0;
    for (int l = 0; l < T; l++)
    {
        for (int c = 0; c < T; c++)
        {
            if (l == c)
            {
                temp += matriz[l][c];
            }
        }
    }
    if (soma != temp)
    {
        r = -1;
    }

    int i[T][2];
    for (int c = 0; c < 2; c++)
    {
        for (int l = 0; l < T; l++)
        {

            if (c == 0)
            {
                i[l][c] = T - 1 - l;
            }
            else
            {
                i[l][c] = l;
            }
        }
    }

    temp = 0;
    for (int l = 0; l < T; l++){
        temp += matriz[i[l][0]][i[l][1]];
    }
    if (soma != temp){
        r = -1;
    }

    if (r == -1)
    {
        cout << -1;
    }else{
        cout << soma;
    }
    
}