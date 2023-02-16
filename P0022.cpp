#include <iostream>

using namespace std;

int per_n[3];       // 순열 숫자
bool per_visit[10]; // 순열 방문체크
int answer;         // 정답

bool check(int question[])
{
    int strike = 0;
    int ball = 0;

    for (int i = 0; i < 3; i++)
    {
        if (question[i] == per_n[i])
            strike++;
        else if (i == 0 && ((question[i] == per_n[i + 1]) || (question[i] == per_n[i + 2])))
            ball++;
        else if (i == 1 && ((question[i] == per_n[i - 1]) || (question[i] == per_n[i + 1])))
            ball++;
        else if (i == 2 && ((question[i] == per_n[i - 1]) || (question[i] == per_n[i - 2])))
            ball++;
    }
    if (strike == question[3] && ball == question[4])
        return true;
    return false;
}

bool question_check(int n, int question[][5])
{
    for (int i = 0; i < n; i++)
    {
        if (!check(question[i]))
            return false;
    }
    return true;
}

void permutation_question_check(int depth, int n, int question[][5])
{
    if (depth == 3)
    {
        if (question_check(n, question))
            answer++;
        return ;
    }
    for (int i = 1; i < 10; i++)
    {
        if (per_visit[i] == false)
        {
            per_n[depth] = i;
            per_visit[i] = true;
            permutation_question_check(depth + 1, n, question);
            per_visit[i] = false;
        }
    }
}

int main(void)
{
    int n;

    cin >> n;
    
    int question[n][5];

    for (int i = 0; i < n; i++)
        scanf("%1d%1d%1d%1d%1d", &question[i][0], &question[i][1], &question[i][2], &question[i][3], &question[i][4]);

    // 3자리 순열을 구하고 질문을 검증해서 맞는 것을 센다
    permutation_question_check(0, n, question);
    cout << answer;
}