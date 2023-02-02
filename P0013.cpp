#include <string>
#include <vector>
#include <iostream>

using namespace std;

int dfs(vector<int> numbers, int sum, int depth, int target) {
    int answer = 0;
    if (depth == numbers.size())
    {
        if (sum == target)
            return 1;
        else
            return 0;
    }
    answer += dfs(numbers, sum + numbers[depth], depth + 1, target);
    answer += dfs(numbers, sum - numbers[depth], depth + 1, target);
    return answer;
}

int solution(vector<int> numbers, int target) {
    int answer = 0;
    answer += dfs(numbers, numbers[0], 1, target);
    answer += dfs(numbers, -numbers[0], 1, target);
    return answer;
}

int main(void) {
    vector<int> test = {1, 1, 1, 1, 1};
    cout << solution(test, 3);
}