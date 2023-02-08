#include<iostream>
#include <cmath>

using namespace std;

int main(int argc, char** argv)
{
    long long k;
    int p, n;

    cin >> k >> p >> n;
    while (n > 0)
    {
        k = (k * p) % 1000000007;
        n--;
    }
    cout << k;
    return 0;
}
