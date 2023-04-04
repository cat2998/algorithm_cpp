#include <iostream>
#include <algorithm>

using namespace std;

int main(void) {
    int N, L, tape_count = 0;
    double tape_lenght = -1;
    
    cin >> N >> L;
    
    int tape[N];
    for (int i = 0; i < N; i++)
        cin >> tape[i];
    sort(tape, tape + N);
    for (int i = 0; i < N; i++)
    {
        if (tape_lenght < tape[i])
        {
            tape_lenght = tape[i] - 0.5 + L;
            tape_count++;
        }
    }
    cout << tape_count;
    return 0;
}