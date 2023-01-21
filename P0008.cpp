#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {
    int n, m;
    vector<int> v;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> m;
        v.push_back(m);
    }
    if (n == 1)
        cout << v[0] * v[0];
    else if (n == 2)
        cout << v[0] * v[1];
    else
    {
        sort(v.begin(), v.end());
        cout << v[0] * v[n - 1];
    }
    return 0;
}