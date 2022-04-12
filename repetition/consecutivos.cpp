#include <iostream>

using namespace std;

int main(){

    int N, ant =0, seq =0, max =0;
    cin >> N;
    
    for(int i = 0; i < N; i++){
        int C0;
        cin >> C0;

        if(C0 == ant){
            seq+= 1;
            if(seq > max){
                max = seq;
            }
        }else{
            if(seq > max){
                max = seq;
            }
            seq = 1;
            ant = C0;
        }
    }
    cout << max;
    
}