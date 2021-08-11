#include <bits/stdc++.h>
using namespace std;
int maxLength(int arr[], int s)
{
    int res = 1;
    int curr = 1;
    for (int i = 1; i < s; i++)
    {
        if ((arr[i] % 2 == 0 && arr[i - 1] % 2 != 0) || (arr[i] % 2 != 0 && arr[i - 1] % 2 == 0))
        {
            curr++;
            res = max(res, curr);
        }
        else
            curr = 1;
    }
    return res;
}
int main()
{
    int arr[] = {10, 12, 14, 7, 8};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << maxLength(arr, size);
    return 0;
}