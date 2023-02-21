#include <iostream>

using namespace std;

int main(void)
{
    int m, n;

    cin >> m >> n;
    char chess[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            cin >> chess[i][j];
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << chess[i][j] << ' ';
        }
        cout << "\n";
    }
    return 0;
}