#include <iostream>
#include <algorithm>

using namespace std;

int a[100000];
int d[100000];

// d[n] = max(a[n], d[n-1] + a[n])
// 지금 숫자와(a[n]), 이전 제일큰경우 + 지금숫자(d[n-1]+a[n]) 중 큰 것이 지금 제일큰경우(d[n])
void dp(int n)
{
    d[0] = a[0];
    for (int i = 1; i < n; i++)
        d[i] = max(a[i], d[i - 1] + a[i]);
    return ;
}

int main(void)
{
    int n;
    
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    dp(n);
    sort(d, d+n);
    cout << d[n - 1];
    return 0;
}