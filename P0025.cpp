#include <iostream>

using namespace std;

int find_color(char *chess, int n, int x, int y)
{
    int white_check = 0;
    // int black_check = 0;
    char white_v[2][8] = { {'W','B','W','B','W','B','W','B'}, {'B','W','B','W','B','W','B','W'} };
    // char black_v[2][8] = { {'B','W','B','W','B','W','B','W'}, {'W','B','W','B','W','B','W','B'} };

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (*(chess + x * n + y + i * n + j) == white_v[i % 2][j])
                white_check++;
            // else if (*(chess + x * n + y + i * n + j) == black_v[i % 2][j])
            //     white_check++;
        }
    }
    // white 시작경우에서 옳지않은 칸들은 black 시작경우에서는 옳은 칸이므로
    // 체스판전체(64) - white옳지않은칸수(whtie_check)(=black옳은칸수) = black옳지않은칸수
    return min(white_check, 64 - white_check);
}

int main(void)
{
    int m, n, result = 64;

    cin >> m >> n;
    char chess[m][n];

    char check_chess[m - 7][n - 7];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            cin >> chess[i][j];
    }
    for (int i = 0; i < m - 7; i++)
    {
        for (int j = 0; j < n - 7; j++)
            result = min(result, find_color((char *)chess, n, i, j));
    }
    cout << result;
    return 0;
}