#include <iostream> // cin e cout

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    while (a <= b)
    {
        if (a%2 ==0)
        {
            cout << a << endl;
        }
        a += 1;
    }
    



}