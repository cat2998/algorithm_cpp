#include<iostream>

using namespace std;
int main(int argc, char** argv)
{
	int n, k, s, a, b;
	int sum = 0;

	cin >> n >> k;

	int score[n];
	for (int i = 0; i < n; i++)
		cin >> score[i];
	for (int i = 0; i < k; i++)
	{
		sum = 0;
		cin >> a >> b;
		for (int j = a; j <= b; j++)
			sum = sum + score[j - 1];
		printf("%.2f\n", (double)sum / (b - a + 1));
	}
	return 0;
}