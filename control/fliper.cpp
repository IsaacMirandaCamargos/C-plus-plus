#include <iostream> // cin e cout

using namespace std;

int main()
{

    int P1, P2;
    cin >> P1 >> P2;

    if (P1 == 0)
    {
        cout << "C";
    }else{
        if(P2 == 0){
            cout << "B";
        }else{
            cout << "A";
        }
    }
}