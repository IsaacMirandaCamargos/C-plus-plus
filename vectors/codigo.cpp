#include <iostream>

using namespace std;

int main()
{
    int s, n = 0;
    cin >> s;
    int p[s];

    for(int i = 0; i <s; i++){
        cin >> p[i];
    }
    for(int i = 0; i <s; i++){
        if(p[i] == 1 and p[i+1] == 0 and p[i+2] == 0 and i<s-2){
            n++;
        }    
    }

    cout << n;
}
