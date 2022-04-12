#include <iostream>

using namespace std;

int main(){

    int Po, N;
    cin >> Po >> N;

    for (int i = 0; i < N; i++)
    {
        int Acrescimo;
        cin >> Acrescimo;
        Po += Acrescimo;
        if (Po >= 100){
            Po = 100;
        }else if (Po < 0){
            Po = 0;
        }
    }
    cout << Po;


    
}