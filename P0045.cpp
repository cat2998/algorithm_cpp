#include <iostream>

using namespace std;

int main(void)
{
    int n;
    int answer = -1;

    cin >> n;

    if (n % 5 == 0)
        answer = n / 5;
    else
    {
        int a = n / 5;
        for (int i = a; i >= 0; i--)
        {
            if ((n - i * 5) % 3 == 0)
            {
                answer = i + (n - i * 5) / 3;
                break;      
            }
        }
    }
    cout << answer;
    return 0;
}