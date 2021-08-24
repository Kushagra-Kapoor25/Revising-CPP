#include <bits/stdc++.h>
using namespace std;
const int R = 4;
const int C = 4;
void printSpiral(int arr[][C])
{
    int top = 0, left = 0, bottom = R - 1, right = C - 1;
    while (top <= bottom && left <= right)
    {
        for (int i = left; i <= right; i++)
            cout << arr[top][i] << " ";
        top++;
        for (int i = top; i <= bottom; i++)
            cout << arr[i][right] << " ";
        right--;
        if (top <= bottom)
        {
            for (int i = right; i >= left; i--)
                cout << arr[bottom][i] << " ";
            bottom--;
        }
        if (left <= right)
        {
            for (int i = bottom; i >= top; i--)
                cout << arr[i][left] << " ";
            left++;
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
    printSpiral(arr);
    return 0;
}