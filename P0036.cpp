#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void calculate(long A, int count);

long A, B;
vector<int> answer;

void multiply_plus_A(long A, int count)
{
    count++;
    if (A == B)
    {
        answer.push_back(count);
        return ;
    }
    else if (A > B)
        return ;
    else
        calculate(A, count);
    return ;
}

void calculate(long A, int count)
{
    multiply_plus_A(A * 2, count);
    multiply_plus_A(A * 10 + 1, count);
}

int main(void)
{
    cin >> A >> B;

    calculate(A, 0);
    if (answer.size() == 0)
        cout << "-1";
    else
    {
        sort(answer.begin(), answer.end());
        cout << answer[0] + 1;
    }
    return 0;
}