#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    int n, x, y;
    vector<pair<int, int>> dongchi;
    
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        dongchi.push_back(make_pair(x, y));
    }
    for (int i = 0; i < n; i++)
    {
        int rank = 1;
        for (int j = 0; j < n; j++)
        {
            if (dongchi[i].first < dongchi[j].first 
                && dongchi[i].second < dongchi[j].second)
                rank++;
        }
        cout << rank << ' ';
    }
    return 0;
}
