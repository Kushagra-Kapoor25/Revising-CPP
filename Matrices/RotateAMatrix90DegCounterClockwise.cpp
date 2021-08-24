#include <bits/stdc++.h>
using namespace std;
const int N = 4;
void rotate90Deg(int arr[][N])
{
    for (int i = 0; i < N; i++)
        for (int j = i + 1; j < N; j++)
            swap(arr[i][j], arr[j][i]);

    for (int i = 0; i < N; i++)
    {
        int low = 0, high = N - 1;
        while (low < high)
        {
            swap(arr[low][i], arr[high][i]);
            low++;
            high--;
        }
    }
}
int main()
{
    int arr[N][N] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}};
    rotate90Deg(arr);
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
            cout << arr[i][j] << "\t";
        cout << endl;
    }
    return 0;
}