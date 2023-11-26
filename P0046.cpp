#include <iostream>
#include <map>
#include <algorithm>
#include <cmath>

using namespace std;

int compare(pair<int, int> a, pair<int, int> b)
{
    if (a.second == b.second)
        return a.first < b.first;
    return a.second > b.second;
}

int main(void)
{
    int n, a, sum = 0;

    cin >> n;

    int arr[n];
    map<int, int> map;

    for (int i = 0; i < n; i++)
    {
        cin >> a;
        arr[i] = a;
        if (map.find(a) == map.end())
            map[a] = 1;
        else
            map[a] = map.find(a)->second + 1;
        sum += a;
    }
    sort(arr, arr + n);
    vector<pair<int, int>> vec(map.begin(), map.end());
    sort(vec.begin(), vec.end(), compare);
    int r = round((float)sum / n);
    cout << r << endl;
    cout << arr[n / 2] << endl;
    if (vec.size() > 1)
    {
        if (vec[0].second == vec[1].second)
            cout << vec[1].first << endl;
        else
            cout << vec[0].first << endl;
    }
    else
        cout << vec[0].first << endl;
    cout << arr[n - 1] - arr[0];
    return 0;
}