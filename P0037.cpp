#include <iostream>

using namespace std;
 
int main()
{
    int N, K;
    int sum = 0;
    
    cin >> N >> K;
    for (int i = 1; i <= K; i++)
        sum += i;
    N -= sum;
    if (N < 0)
        cout << -1;
    else
    {
        if (N % K == 0)
            cout << K - 1;
        else if (N % K != 0)
            cout << K;
    }
    return 0;
}