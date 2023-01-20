#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int m, n;
    string monster, question;
    string pokemon[100000];
    map<string, int> map;

    cin >> m >> n;
    for (int i = 0; i < m; i++)
    {
        cin >> pokemon[i];
        map.insert(make_pair(pokemon[i], i));
    }
    for (int i = 0; i < n; i++)
    {
        cin >> question;
        if ('A' > question[0])
            cout << pokemon[stoi(question) - 1] << "\n";
        else
            cout << map.find(question)->second + 1 << "\n";
    }
    return 0;
}