#include<iostream>
#include <vector>
#include <map>
#include <string>

using namespace std;

string printInt(int a)
{
	string str = "";

	if (a < 10)
		str += "0";
	str += to_string(a);
	return str;
}

int main(int argc, char** argv)
{
	int n, m, a, b;
	string name;
	map<string, int> room;
	vector<vector<int> > schedule;

	cin >> n >> m;

	schedule = vector<vector<int> >(n, vector<int>(19, 0));
	for (int i = 0; i < n; i++)
	{
		cin >> name;
		room.insert(make_pair(name, i));
	}
	for (int i = 0; i < m; i++)
	{
		cin >> name >> a >> b;
		int index = room.find(name)->second;
		while (a < b)
		{
			schedule[index][a] = 1;
			a++;
		}
	}
	for (auto iter = room.begin(); iter != room.end(); iter++)
	{
		if (iter != room.begin())
			cout << "-----\n";
		int count = 0;
		string str = "";
		cout << "Room " << iter->first << ":\n";
		for (int i = 9; i < 18; i++)
		{
			if (schedule[iter->second][i] == 0)
			{
				str += printInt(i) + '-';
				for (int j = i + 1; j <= 18; j++)
				{
					if (j == 18)
						schedule[iter->second][j] = 1;
					if (schedule[iter->second][j] == 0)
						schedule[iter->second][j] = 1;
					else
					{
						str += printInt(j) + '\n';
						break;
					}
				}
				count++;
			}
		}
		if (count == 0)
			cout << "Not available\n";
		else
			cout << count << " available:\n" << str;
	}
	return 0;
}