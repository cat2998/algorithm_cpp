#include <iostream>

using namespace std;

int fib(int n, int *count_fib) {
    if (n == 1 || n == 2)
    {
        (*count_fib)++;
        return 1;
    }
    else
        return (fib(n - 1, count_fib) + fib(n - 2, count_fib));
}

int fibonacci(int n, int *count_fibonacci) {
    int f[41];

    f[1] = f[2] = 1;
    for (int i = 3; i <= n; i++)
    {
        (*count_fibonacci)++;
        f[i] = f[i - 1] + f[i - 2];
    }
    return f[n];
}

int main(void) {
    int n;
    int count_fib = 0;
    int count_fibonacci = 0;

    cin >> n;
    fib(n, &count_fib);
    cout << count_fib << ' ';
    fibonacci(n, &count_fibonacci);
    cout << count_fibonacci;
}