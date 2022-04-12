#include <iostream> // cin e cout

using namespace std;

int main()
{

    int num;
    cin >> num;

    if (num > 0)
    {
        cout << "positivo";
    }
    else if (num < 0)
    {
        cout << "negativo";
    }
    else
    {
        cout << "nulo";
    }
}