#include <iostream>
#include <string>

using namespace std;

int main(void) {
    long long answer = 1;
    int c = 26;
    int d = 10;
    string format;

    cin >> format;
    for (int i = 0; i < format.length(); i++)
    {
        if (i != 0 && format[i - 1] == format[i])
        {
            if (format[i] == 'c')
                answer *= (c - 1);
            else
                answer *= (d - 1);
        }
        else if (format[i] == 'c')
            answer *= c;
        else if (format[i] == 'd')
            answer *= d;
        answer %= 1000000009;
    }
    cout << answer;
    return 0;
}