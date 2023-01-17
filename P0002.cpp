#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(int i, int j)
{
    return i > j;
}

long long solution(long long n) {
    long long answer = 0;
    vector<int> v;

    while (n != 0)
    {
        v.push_back(n % 10);
        n /= 10;
    }
    sort(v.begin(), v.end(), compare);
    for (int i = 0; i < v.size(); i++)
        answer = answer * 10 + v[i];
    return answer;
}