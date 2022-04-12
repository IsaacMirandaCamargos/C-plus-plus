#include <iostream> // cin e cout

using namespace std;

int main()
{
    int B, copos_quebrados = 0;
    cin >> B;

    while (B>0)
    {
        int L, C;
        cin >> L >> C;
        if (L > C)
        {
            copos_quebrados += C;
        }
        B -= 1;
    }
    cout << copos_quebrados;
    
    
}