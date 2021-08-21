#include <bits/stdc++.h>
using namespace std;
int getSum(int l, int r, int arr[], int n)
{
    int pre[n] = {0};
    pre[0] = arr[0];
    for (int i = 1; i < n; i++)
        pre[i] = pre[i - 1] + arr[i];
    if (l == 0)
        return pre[r];
    else
        return (pre[r] - pre[l - 1]);
}
int main()
{
    int arr[] = {2, 8, 3, 9, 6, 5, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << getSum(0, 3, arr, size);
    return 0;
}