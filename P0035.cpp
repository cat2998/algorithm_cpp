#include <iostream>

using namespace std;

int main(void)
{
    int N, K, answer = 0;

    cin >> N >> K;

    char table[N];
    for (int i = 0; i < N; i++)
        cin >> table[i];

    for (int i = 0; i < N; i++)
    {
        if (table[i] == 'P')
        {
            for (int j = i - K; j <= i + K; j++)
            {
                if (j < 0 || j >= N)
                    continue;
                else if (table[j] == 'H')
                {
                    table[j] = 'E';
                    answer++;
                    break;
                }
            }
        }
    }
    cout << answer;
    return 0;
}