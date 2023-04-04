#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<pair<long int,long int>> meeting_time;
vector<pair<long int,long int>> answer;

bool com(pair<long int, long int> x, pair<long int, long int> y)
{
	if (x.second == y.second) 
		return x.first > y.first;
	return x.second > y.second;
}

int main() {
	int N;

	cin >> N;

	meeting_time = vector<pair<long int,long int>>(N, make_pair(0, 0));
	answer.push_back(make_pair(0,0));

	for(int i = 0; i < N; i++)
		cin >> meeting_time[i].first >> meeting_time[i].second;
	sort(meeting_time.begin(), meeting_time.end(), com);
	while(!meeting_time.empty())
    {
		if(answer.back().second <= meeting_time.back().first)
			answer.push_back(meeting_time.back());
		meeting_time.pop_back();
	}
	cout << answer.size() - 1;
    return 0;
}