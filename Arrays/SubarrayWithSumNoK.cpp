#include <bits/stdc++.h>
using namespace std;
bool subArrWithSum(int arr[], int n, int sum)
{
    int curr_sum = arr[0], s = 0;
    for (int e = 1; e < n; e++)
    {
        while (curr_sum > sum && s < e - 1)
        {
            curr_sum -= arr[s];
            s++;
        }
        if (curr_sum == sum)
            return true;
        if (e < n)
            curr_sum += arr[e];
    }
    return (curr_sum == sum);
}
int main()
{
    int arr[] = {1, 4, 20, 3, 10, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << subArrWithSum(arr, size, 15);
    return 0;
}