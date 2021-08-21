#include <bits/stdc++.h>
using namespace std;
int kConsMaxSum(int arr[], int n, int k)
{
    int curr_sum = 0;
    int max_sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (i < k)
        {
            curr_sum += arr[i];
            max_sum = curr_sum;
        }
        else
        {
            curr_sum = curr_sum + arr[i] - arr[i - k];
            max_sum = max(max_sum, curr_sum);
        }
    }
    return max_sum;
}
int main()
{
    int arr[] = {1, 8, 30, -5, 20, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    int k = 3;
    cout << kConsMaxSum(arr, size, k);
    return 0;
}