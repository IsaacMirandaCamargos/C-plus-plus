#include <iostream>
#include <cmath>

using namespace std;

/*
8
-1 -1 0 -1 -1 -1 0 -1
*/


int main()
{
    int s;
    cin >> s;
    int f[s];

    for (int i = 0; i < s; i++)
    {
        cin >> f[i];
        if (f[i] == -1)
        {
            f[i] = 9;
        }
    }


    for (int i = 1; i < s; i++)
    {
        f[i] = min(f[i], f[i - 1]+1);
    }
    for (int i = s-2; i >= 0; i--)
    {
        f[i] = min(f[i], f[i+1] + 1);
    }
    

    for (int i = 0; i < s; i++)
    {
        cout << f[i] << " ";
    }
    
}
