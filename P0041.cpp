#include <iostream>

using namespace std;

int main(void)
{
    int n, flag = 0;

    cin >> n;

    if (n == 0)
    {
        cout << "0" << endl;
        cout << "0" << endl;
        return 0;
    }
    if (n < 0)
    {
        n = n * (-1);
        flag = 1;
    }
    long long fb[n + 1];
    fb[0] = 0;
    fb[1] = 1;
    for (int i = 2; i <= n; i++)
        fb[i] = (fb[i - 1] + fb[i - 2]) % 1000000000;
    if (flag == 1 && n % 2 == 0)
        cout << "-1" << endl;
    else
        cout << "1" << endl;
    cout << fb[n] % 1000000000;
    return 0;
}