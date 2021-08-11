#include <bits/stdc++.h>
using namespace std;
// Kadane's Algo
int maximumSumSubarray(int arr[], int s)
{
    int m = arr[0];
    int res = arr[0];
    for (int i = 1; i < s; i++)
    {
        m = max(m + arr[i], arr[i]);
        res = max(res, m);
    }
    return res;
}
int main()
{
    int arr[] = {-6, -8, -1};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << maximumSumSubarray(arr, size);
    return 0;
}