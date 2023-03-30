#include <iostream>
#include <vector>

using namespace std;

vector<int> triangle;

void calculate_triangle()
{
    int n = 1;

    while (n * (n + 1) / 2 <= 1000)
    {
        triangle.push_back(n * (n + 1) / 2);
        n++;
    }
    return ;
}

int triangle_sum(int K)
{
    for (int i = 0; i < triangle.size(); i++)
    {
        for (int j = 0; j < triangle.size(); j++)
        {
            for (int k = 0; k < triangle.size(); k++)
            {
                if (triangle[i] + triangle[j] + triangle[k] == K)
                    return 1;
                else if (triangle[i] + triangle[j] + triangle[k] > K)
                    break;
            }
        }
    }
    return 0;
}

int main(void)
{
    int T, K;

    cin >> T;
    calculate_triangle();
    for (int i = 0; i < T; i++)
    {
        cin >> K;
        cout << triangle_sum(K) << endl;
    }
    return 0;
}