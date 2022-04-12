#include <iostream> // cin e cout

using namespace std;


int main(){

    int P1, C1, P2, C2;
    cin >> P1 >> C1 >> P2 >> C2;

    if (P1*C1 > P2*C2)
    {
        cout << "-1";
    }else if (P1*C1 < P2*C2)
    {
        cout << "1";
    }else{
        cout << "0";
    }
    

    
}