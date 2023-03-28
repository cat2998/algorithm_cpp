#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
    int n;			// 사람의 수
    long long sum;	// 팁 합

    cin >> n;

    int tip[n];
    for (int i = 0; i < n; i++)
        cin >> tip[i];
    sort(tip, tip + n, greater<int>());
    sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (tip[i] - i <= 0)
            break;
        sum += tip[i] - i;
    }
    cout << sum;
    return 0;
}
