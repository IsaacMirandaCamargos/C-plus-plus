#include <iostream>

using namespace std;

int main()
{
    int s;
    cin >> s;
    int m[s], p[s];

    for (int i = 0; i < s; i++)
    {
        p[i] = 0;
    }

    for (int i = 0; i < s; i++)
    {
        cin >> m[i];
        if (m[i] == 1 and i > 0)
        {
            p[i - 1] += 1;
            p[i] += 1;
            p[i + 1] += 1;
        }
        else if(m[i]==1)
        {
            p[i] += 1;
            p[i + 1] += 1;
        }
    }
    for (int i = 0; i < s; i++)
    {
        cout << p[i] << endl;
    }
}
