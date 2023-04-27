#include <iostream>

using namespace std;

vector<pair<int, int>> people;

int compare(pair<int, int> a, pair<int, int> b)
{
    return a.first < b.first;
}

int main(void)
{
    int T, N, a, b, count = 1;

    cin >> T >> N;
    for (int i = 0; i < T; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> a >> b;
            people.push_back(make_pair(a, b));
        }
        sort(people.begin(), people.end(), compare);
        int best = people[0].second;
        for (int j = 1; j < N; j++)
        {
            if (best < people[i].second)
            {
                best = people[i].second;
                cout << best << endl;
                count++;
            }
        }
        cout << count << endl;
        people.clear();
    }
}