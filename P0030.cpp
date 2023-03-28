#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

long long answer = 0;
vector<int> S;

int check_n(vector<int> S, int n)
{
    for (int i = 0; i < S.size(); i++)
    {
        if (S[i] == n)
            return 1;
    }
    return 0;
}

void check_set(vector<int> S, int n)
{
    int A = 1, B = S[0] - 1;
    for (int i = 0; i < S.size() - 1; i++)
    {
        if (S[i] < n && n < S[i + 1])
        {
            A = S[i] + 1;
            B = S[i + 1] - 1;
            break;
        }
    }
    for (int i = A; i <= B; i++)
    {
        if (i <= n)
        {
            for (int j = i + 1; j <= B; j++)
            {
                if (n <= j)
                    answer++;
            }
        }
    }
    return ;
}

int main(void)
{
    int L, n;
    cin >> L;
    S = vector<int>(L, 0);
    for (int i = 0; i < L; i++)
        cin >> S[i];
    cin >> n;
    sort(S.begin(), S.end());
    if (check_n(S, n) != 1)
        check_set(S, n);
    cout << answer;
    return 0;
}