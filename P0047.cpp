#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int compare(string s1, string s2)
{
    if (s1.size() == s2.size())
    {
        for (int i = 0; i < s1.size(); i++)
        {
            if (s1[i] != s2[i])
                return s1[i] < s2[i];
        }
    }
    return s1.size() < s2.size();
}

int main(void)
{
    int n;

    cin >> n;
    
    string arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr, arr + n, compare);
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] != arr[i + 1])
            cout << arr[i] << endl;
    }
    cout << arr[n - 1];
    return 0;
}