#include <iostream>

using namespace std;

int solution(string s) {
    int answer = 0;
    int minus = 1;
    
    for (int i = 0; i < s.length(); i++)
    {
        if (i == 0 && (s[i] == '+' || s[i] == '-'))
        {
            if (s[i] == '-')
                minus = -1;
            continue;
        }
        answer = answer * 10 + s[i] - '0';
    }
    if (minus < 0)
        answer *= -1;
    return answer;
}

int main(void) {
    cout << solution("1234") << endl;
    return 0;
}