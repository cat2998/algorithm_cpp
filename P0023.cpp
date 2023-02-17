#include <iostream>
#include <vector>

using namespace std;

int m;  // 가로
int n;  // 세로
int answer = 0;  // 정답
vector<vector<int> > farm;

void dfs(int x, int y)
{
    farm[x][y] = 2;
    if (x - 1 >= 0 && farm[x - 1][y] == 1)
        dfs(x - 1, y);
    if (x + 1 < m && farm[x + 1][y] == 1)
        dfs(x + 1, y);
    if (y - 1 >= 0 && farm[x][y - 1] == 1)
        dfs(x, y - 1);
    if (y + 1 < n && farm[x][y + 1] == 1)
        dfs(x, y + 1);
    return ;
}

void check_dfs()
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (farm[i][j] == 1)
            {
                dfs(i, j);
                answer++;
            }
        }
    }
    return ;
}

int main(void)
{
    int t, k, x, y;

    cin >> t;
    for(int i = 0; i < t; i++)
    {
        cin >> m >> n >> k;
        farm = vector<vector<int>> (m, vector<int> (n, 0));
        for (int j = 0; j < k; j++)
        {
            cin >> x >> y;
            farm[x][y] = 1;
        }
        answer = 0;
        check_dfs();
        cout << answer << "\n";
    }
}