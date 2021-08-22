#include <bits/stdc++.h>
using namespace std;
const int R = 4;
const int C = 4;
void printSnakePattern(int arr[][C])
{
    for (int i = 0; i < R; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < C; j++)
                cout << arr[i][j] << " ";
        }
        else
        {
            for (int j = C - 1; j >= 0; j--)
                cout << arr[i][j] << " ";
        }
    }
}
int main()
{
    int arr[R][C] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}};
    printSnakePattern(arr);
    return 0;
}