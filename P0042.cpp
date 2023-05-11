#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
    int n;
    cin >> n;

    int box[n];
    int into[n];
    for (int i = 0; i < n; i++)
        cin >> box[i];
    for (int i = 0; i < n; i++)
        into[i] = 1;
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (box[j] < box[i] && into[i] < into[j] + 1)
                into[i] = into[j] + 1;
        }
    }
    sort(into, into + n);
    cout << into[n - 1];
    return 0;
}