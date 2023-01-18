#include <iostream>
#include <string>
#include <set>

using namespace std;

int main(void) {
    string str;
    set<string> answer;

    cin >> str;
    for (int i = 1; i <= str.length(); i++)
    {
        for (int j = 0; j + i <= str.length(); j++)
            answer.insert(str.substr(j, i));
    }
    cout << answer.size();
    return 0;
}