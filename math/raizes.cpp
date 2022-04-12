#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    int N;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        double X;
        cin >> X;

        cout.precision(4);
        cout.setf(ios::fixed);
        cout << sqrt(X) << endl;
    }
    
}