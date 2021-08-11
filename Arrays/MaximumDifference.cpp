#include <bits/stdc++.h>
using namespace std;
// int maxDiff(int arr[], int size)
// {
//     int res = arr[1] - arr[0];
//     for (int i = 0; i < size - 1; i++)
//         for (int j = i + 1; j < size; j++)
//             res = max(res, arr[j] - arr[i]);
//     return res;
// }

int maxDiff(int arr[], int s)
{
    int res = arr[1] - arr[0], minVal = arr[0];
    for (int j = 1; j < s; j++)
    {
        res = max(res, arr[j] - minVal);
        minVal = min(minVal, arr[j]);
    }
    return res;
}

int main()
{
    int arr[] = {30, 10, 8, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << maxDiff(arr, size);
    return 0;
}