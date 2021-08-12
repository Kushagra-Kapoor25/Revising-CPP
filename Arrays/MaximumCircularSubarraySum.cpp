#include <bits/stdc++.h>
using namespace std;
int maxSum(int arr[], int n)
{
    int m1 = arr[0];
    int r1 = arr[0];
    for (int i = 1; i < n; i++)
    {
        m1 = max(arr[i], m1 + arr[i]);
        r1 = max(r1, m1);
    }
    // important condition
    if (r1 < 0)
        return r1;

    int m2 = arr[0];
    int r2 = arr[0];
    int total_sum = arr[0];

    for (int i = 1; i < n; i++)
    {
        m2 = min(arr[i], m2 + arr[i]);
        r2 = min(r2, m2);
        total_sum += arr[i];
    }

    return max(r1, total_sum - r2);
}
int main()
{
    int arr[] = {-5, -3};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << maxSum(arr, size);
    return 0;
}