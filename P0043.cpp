#include <iostream>

using namespace std;

int main(void)
{
    int a, b, n;

    cin >> a >> b;

    int A[a*b];

    for (int i = 0; i < a*b; i++)
        cin >> A[i];
    for (int i = 0; i < a*b; i++)
    {
        cin >> n;
        A[i] += n;
    }
    for (int i = 0; i < a*b; i++)
    {
        cout << A[i];
        if (i % a == (a - 1))
            cout << '\n';
        else
            cout << ' ';
    }

    return 0;
}