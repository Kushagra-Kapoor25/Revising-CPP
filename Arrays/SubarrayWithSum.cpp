#include <bits/stdc++.h>
using namespace std;
void subarrayWithSum(int arr[], int sum, int k, int n)
{
    int curr_sum = 0;
    for (int i = 0; i < k; i++)
        curr_sum += arr[i];
    if (curr_sum == sum)
    {
        cout << "Yes";
        return;
    }
    for (int i = k; i < n; i++)
    {
        curr_sum += (arr[i] - arr[i - k]);
        if (curr_sum == sum)
        {
            cout << "Yes";
            return;
        }
    }
    cout << "No";
}
int main()
{
    int arr[] = {1, 8, 30, -5, 20, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    int k = 3;
    subarrayWithSum(arr, 45, k, size);
    return 0;
}