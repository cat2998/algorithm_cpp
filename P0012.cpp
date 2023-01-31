#include <iostream>

using namespace std;

#define n 4
#define r 3

int rArr[r] = { 0 };
int check[n + 1] = { false };

void printArr(int arr[])
{
    for (int i = 0; i < r; i++)
        cout << arr[i] << ' ';
    cout << "\n";
    return ;
}

void permutation(int depth)
{
    if (depth == r)
    {
        printArr(rArr);
        return ;
    }
    for (int i = 1; i <= n; i++)
    {
        if (!check[i])
        {
            rArr[depth] = i;
            check[i] = true;
            permutation(depth + 1);
            check[i] = false;
        }
    }
}

void duplicatePermutation(int depth)
{
    if (depth == r)
    {
        printArr(rArr);
        return ;
    }
    for (int i = 1; i <= n; i++)
    {
        rArr[depth] = i;
        duplicatePermutation(depth + 1);
    }
}

void combination(int depth, int next)
{
    if (depth == r)
    {
        printArr(rArr);
        return ;
    }
    for (int i = next; i <= n; i++)
    {
        rArr[depth] = i;
        combination(depth + 1, i + 1);
    }
}

void duplicateCombination(int depth, int next)
{
    if (depth == r)
    {
        printArr(rArr);
        return ;
    }
    for (int i = next; i <= n; i++)
    {
        rArr[depth] = i;
        duplicateCombination(depth + 1, i);
    }
}

int main(void) {

    cout << "순열 (순서 O, 중복 X)" << "\n";
    permutation(0);

    rArr[r] = { 0 };
    cout << "순열 (순서 O, 중복 O)" << "\n";
    duplicatePermutation(0);

    rArr[r] = { 0 };
    cout << "조합 (순서 X, 중복 X)" << "\n";
    combination(0, 1);

    rArr[r] = { 0 };
    cout << "조합 (순서 X, 중복 O)" << "\n";
    duplicateCombination(0, 1);

    return 0;
}