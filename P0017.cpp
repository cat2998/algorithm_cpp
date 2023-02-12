#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int> > map;
vector<vector<bool> > map_visit;

int dfs(int n, int x, int y)
{
	int count = 1;
	map_visit[x][y] = true;
	if (x - 1 >= 0 && !map_visit[x - 1][y] && map[x - 1][y] == 1)
		count += dfs(n, x - 1, y);
	if (x + 1 < n && !map_visit[x + 1][y] && map[x + 1][y] == 1)
		count += dfs(n, x + 1, y);
	if (y - 1 >= 0 && !map_visit[x][y - 1] && map[x][y - 1] == 1)
		count += dfs(n, x, y - 1);
	if (y + 1 < n && !map_visit[x][y + 1] && map[x][y + 1] == 1)
		count += dfs(n, x, y + 1);
	return count;
}

int main(int argc, char** argv)
{
	int n, width;
	vector<int> result;

	cin >> n;
	map = vector<vector<int> >(n, vector<int>(n, 0));
	map_visit = vector<vector<bool> >(n, vector<bool>(n, false));
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			scanf("%01d", &map[i][j]);
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (!map_visit[i][j] && map[i][j] == 1)
				result.push_back(dfs(n, i, j));
		}
	}
	cout << result.size() << "\n";
	sort(result.begin(), result.end());
	for (int i = 0; i < result.size(); i++)
		cout << result[i] << "\n";
	return 0;
}