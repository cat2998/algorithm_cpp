#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int main(void)
{
    int n, cnt = 0;

    cin >> n;

    int arr[n];
    vector<int> vec_arr;
    map<int, int> map_arr;
    
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        vec_arr.push_back(arr[i]);
    }
    sort(vec_arr.begin(), vec_arr.end());
    vec_arr.erase(unique(vec_arr.begin(), vec_arr.end()), vec_arr.end());
    for (int i = 0; i < vec_arr.size(); i++)
        map_arr[vec_arr[i]] = i;
    for (int i = 0; i < n; i++)
    {
        if (i != 0)
            cout << ' ';
        cout << map_arr[arr[i]];
    }
    return 0;
}