#include <iostream>

using namespace std;

int main(void)
{
    int N, M, K, sum;

    cin >> N >> M;
    int Apro[N][M];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
            cin >> Apro[i][j];
    }
    cin >> M >> K;
    int Bpro[M][K];
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < K; j++)
            cin >> Bpro[i][j];
    }

    int answer[N][K];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < K; j++)
        {
            sum = 0;
            for (int z = 0; z < M; z++)
                sum += Apro[i][z] * Bpro[z][j];
            answer[i][j] = sum;
        }
    }
    
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < K; j++)
            cout << answer[i][j] << ' ';
        cout << endl;
    }
    return 0;
}