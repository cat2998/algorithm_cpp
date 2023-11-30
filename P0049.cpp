#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int compare(pair<string, int> a, pair<string, int> b)
{
    if (a.second == b.second)
    {
        if (a.first.length() == b.first.length())
            return a.first < b.first;
        return a.first.length() > b.first.length();
    }
    return a.second > b.second;
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;

    cin >> n >> m;

    string arr[n];
    map<string, int> map;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    for (int i = 0; i < n; i++)
    {
        if (arr[i].length() >= m)
        {
            if (map.find(arr[i]) == map.end())
                map[arr[i]] = 1;
            else
                map[arr[i]] = map[arr[i]] + 1;
        }
    }
    vector<pair<string, int> > vec(map.begin(), map.end());
    sort(vec.begin(), vec.end(), compare);
    for (int i = 0; i < vec.size(); i++)
        cout << vec[i].first << '\n';
    return 0;    
}