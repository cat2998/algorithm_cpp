#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int m, n, k;

	cin >> m >> n >> k;
	
	int secret[m];
	int push[n];
	int t;

	for (int i = 0; i < m; i++)
		cin >> secret[i];
	for (int i = 0; i < n; i++)
		cin >> push[i];
	for (int i = 0; i < n; i++)
	{
		if (push[i] == secret[0])
		{
			t = i + 1;
			for (int j = 1; j < m; j++)
			{
				if (t == n || push[t++] != secret[j])
				{
					t = -1;
					break;
				}
			}
			if (t != -1)
			{
				cout << "secret";
				return 0;
			}
		}
	}
	cout << "normal";
	return 0;
}