#include<vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<int> success;

void printMaps(vector<vector<int> > maps) {
    for (int i = 0; i < maps.size(); i++)
    {
        for (int j = 0; j < maps[0].size(); j++)
            cout << maps[i][j] << ' ';
        cout << "\n";
    }
    return ;
}

void dfs(vector<vector<int> > maps, int x, int y, int count) {
    count++;
    maps[x][y] = 2;
    // cout << "지금위치 : " << x << ' ' << y << ", 걸음수: " << count << "\n";
    // printMaps(maps);
    if (x == maps.size() - 1 && y == maps[0].size() - 1)
    {
        success.push_back(count);
        return ;
    }
    if (x - 1 >= 0 && maps[x - 1][y] == 1)
        dfs(maps, x - 1, y, count);
    if (x + 1 < maps.size() && maps[x + 1][y] == 1)
        dfs(maps, x + 1, y, count);
    if (y - 1 >= 0 && maps[x][y - 1] == 1)
        dfs(maps, x, y - 1, count);
    if (y + 1 < maps[0].size() && maps[x][y + 1] == 1)
        dfs(maps, x, y + 1, count);
    return ;
}

int solution(vector<vector<int> > maps)
{
    dfs(maps, 0, 0, 0);
    if (success.size() == 0)
        return -1;
    sort(success.begin(), success.end());
    return success[0];
}