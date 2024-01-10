#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T, n;

	cin>>T;

	for(test_case = 1; test_case <= T; ++test_case)
	{
        cin >> n;
        
        int total = 0;
        int minus_max_total = 0;
        int abc_max;
        int max_arr[n];
        int a[n], b[n], c[n];
        int result;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i] >> b[i] >> c[i];
            total += a[i] + b[i] + c[i];
            abc_max = max(a[i], (max(b[i], c[i])));
            max_arr[i] = abc_max;
            minus_max_total += a[i] + b[i] + c[i] - max_arr[i];
        }

        if (n < 3)
        {
            cout << "#" << test_case << " -1" << '\n';
            continue;
        }

        result = total;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i == j)
                    continue;
                for (int k = 0; k < n; k++)
                {
                    if (i == k || j == k)
                        continue;
                    int s = minus_max_total + (max_arr[i] + max_arr[j] + max_arr[k]) - (a[i] + b[j] + c[k]);
                    result = min(result, s);
                }
            }
        }

        cout << "#" << test_case << " " << result << '\n';
	}
	return 0;
}