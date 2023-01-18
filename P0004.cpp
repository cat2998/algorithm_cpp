#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool compare(pair<int, int> a, pair<int, int> b)
{
    int ax = a.first;
    int ay = a.second;
    int bx = b.first;
    int by = b.second;
    if (ax == bx)
        return ay < by;
    return ax < bx;
}

int main(void) {
    int n, x, y;
    vector<pair<int, int>> v;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        v.push_back(make_pair(x, y));
    }
    sort(v.begin(), v.end(), compare);
    for (auto p: v)
        cout << p.first << ' ' << p.second << "\n";
    return 0;
}