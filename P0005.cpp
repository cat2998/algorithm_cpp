#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

bool compare(pair<int, string> p1, pair<int, string> p2) {
    return p1.first < p2.first;
}

int main(void) {
    int n, age;
    string name;
    vector<pair<int, string> > v;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> age >> name;
        v.push_back(make_pair(age, name));
    }
    stable_sort(v.begin(), v.end(), compare);
    for (auto p: v)
        cout << p.first << ' ' << p.second << "\n";
}