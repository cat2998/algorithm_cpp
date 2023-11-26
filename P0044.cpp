#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void)
{
    int max_len = 0;
    string str;
    char c[5][16];

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 16; j++)
            c[i][j] = '\0';
    }
    for (int i = 0; i < 5; i++)
    {
        cin >> str;
        for (int j = 0; j < str.size(); j++)
            c[i][j] = str[j];
        if (max_len < str.size())
            max_len = str.size();
    }
    for (int i = 0; i < max_len; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (c[j][i] != '\0')
                cout << c[j][i];
        }
    }
    return 0;
}