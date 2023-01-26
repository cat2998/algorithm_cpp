#include <iostream>

using namespace std;

long long int padoban(int m) {
    long long int p[101] = { 0, 1, 1, 1, 2, 2, };

    for (int i = 6; i <= m; i++)
        p[i] = p[i - 1] + p[i - 5];
    return p[m];
}

int main(void) {
    int n, m;
    int p[101];

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> m;
        cout << padoban(m) << "\n";
    }
    return 0;
}