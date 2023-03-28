#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
    int n, m, b, L;
    int min_h;  // 최소 높이
    int max_h;  // 최대 높이
    int time = 64000000;    // 최소 시간
    int in_time;    // 소요 시간
    int in_block;   // 인벤토리 내 블록 개수

    cin >> n >> m >> b;

    L = n * m;
    in_block = b;
    int ground[L];
    for (int i = 0; i < L; i++)
        cin >> ground[i];
    sort(ground, ground + L);
    min_h = ground[0];
    max_h = ground[L - 1];
    for (int i = min_h; i <= max_h; i++)
    {
        in_time = 0;
        cout << "목표높이: " << i<<"\n";
        for (int j = 0; j < L; j++)
        {
            if (ground[j] > i)
            {
                in_time += (ground[j] - i) * 2;
                in_block += ground[j] - i;
            }
            else if (ground[j] < i)
            {
                in_time += i - ground[j];
                in_block += i - ground[j];
            }
            cout << "현재 땅: " << ground[j] << "\n소요시간: " << in_time << "\n";
        }
        time = min(time, in_time);
        cout << "   최소시간: " << time<<"\n";
    }
    return 0;
}