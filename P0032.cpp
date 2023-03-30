#include <iostream>
#include <vector>

using namespace std;

int han_num = 0;

bool is_han(int n)
{
    int diff;
    vector<int> digit;

    while (n != 0)
    {
        digit.push_back(n % 10);
        n = n / 10;
    }
    diff = digit[0] - digit[1];
    for (int i = 1; i < digit.size() - 1; i++)
    {
        if (digit[i] - digit[i + 1] != diff)
            return false;
    }
    return true;
}

int main(void)
{
    int N;

    cin >> N;
    if (N < 100)
        han_num = N;
    else
    {
        han_num = 99;
        for (int i = 100; i <= N; i++)
        {
            if (is_han(i))
                han_num++;
        }
    }
    cout << han_num;
    return 0;
}