#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T, s, e, tmp, cnt;
    int start[2];
    int end[2];

	cin >> T;

	for(test_case = 1; test_case <= T; ++test_case)
	{
		cin >> s >> e;
        if (s > e)
        {
            tmp = s;
            s = e;
            e = tmp;
        }
        
        cnt = 1;
        while (s > 0)
        {
         	s = s - cnt;
            cnt++;
        }
        start[0] = cnt - 1;
        start[1] = s;
        cnt = 1;
        while (e > 0)
        {
         	e = e - cnt;
            cnt++;
        }
        end[0] = cnt - 1;
        end[1] = e;
        
  		int result = end[0] - start[0];
        int left = start[1] - result;
        int right = start[1];

        if (end[1] < left)
         	result = result + (left - end[1]);
        else if (right < end[1])
            result = result + (end[1] - right);
		
        cout << "#" << test_case << " " << result << '\n';
	}
	return 0;
}