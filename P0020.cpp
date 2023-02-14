#include<iostream>

using namespace std;

int div_set(int *x)
{
	int div;

	if (*x == 0)
		div = 10;
	else
	{
		div = *x % 10;
		*x /= 10;
	}
	return div;
}

int main(int argc, char** argv)
{
	int t, a, b, div_a, div_b;
	int answer = 0;
	int score[11][7] = { {1,1,1,1,1,1,0}, {0,1,1,0,0,0,0}, {1,1,0,1,1,0,1},
		{1,1,1,1,0,0,1}, {0,1,1,0,0,1,1}, {1,0,1,1,0,1,1}, {1,0,1,1,1,1,1},
		{1,1,1,0,0,1,0}, {1,1,1,1,1,1,1}, {1,1,1,1,0,1,1}, {0,0,0,0,0,0,0} };

	cin >> t;
	for (int i = 0; i < t; i++)
	{
		answer = 0;
		cin >> a >> b;
		while (a != 0 || b != 0)
		{
			div_a = div_set(&a);
			div_b = div_set(&b);
			for (int j = 0; j < 7; j++)
			{
				if (score[div_a][j] != score[div_b][j])
					answer++;
			}
		}
		cout << answer << "\n";
	}
	return 0;
}