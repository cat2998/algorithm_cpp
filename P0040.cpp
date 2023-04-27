#include <iostream>
#include <queue>

using namespace std;

// 점화식 : dp[n] = min(dp[n-1] + 1, dp[n/2] + 1)

int main(void)
{
    int A, K, answer;

    cin >> A >> K;

    int dp[K + 1];
    
    if (A == K)
        answer = 0;
    else
    {
        dp[A] = 0;
        for (int i = A + 1; i <= K; i++)
        {
            dp[i] = dp[i - 1] + 1;
            if (i % 2 == 0 && i / 2 >= A)
                dp[i] = min(dp[i - 1] + 1, dp[i / 2] + 1);
        }
        answer = dp[K];
    }
    cout << answer;
    return 0;
}