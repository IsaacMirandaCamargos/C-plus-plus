#include <iostream> // cin e cout

using namespace std;

int main()
{
    int N, soma = 0, dias = 0;
    cin >> N;
    while (N > 0)
    {
        int V;
        cin >> V;


        if(soma < 1000000){
            soma += V;
            dias += 1;
            if (soma == 1000000)
            {
                cout << dias;
                break;
            }
            
        }else{
            cout << dias;
            break;
        }
        N -= 1;
    }
    
}