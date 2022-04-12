#include <iostream> // cin e cout

using namespace std;

int main()
{
    int a, i = 1;
    cin >> a;

    while (i<=a)
    {
        if(a%i==0){
            cout << i << " ";
        }
        i += 1;
    }
    
}