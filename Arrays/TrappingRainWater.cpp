#include <bits/stdc++.h>
using namespace std;
// int trapWater(int arr[], int n)
// {
//     int res = 0;
//     for (int i = 1; i < n - 1; i++)
//     {
//         int lMax = arr[i];
//         for (int j = 0; j < i; j++)
//             lMax = max(lMax, arr[j]);

//         int rMax = arr[i];
//         for (int j = i + 1; j < n; j++)
//             rMax = max(rMax, arr[j]);
//         res = res + (min(lMax, rMax) - arr[i]);
//     }
//     return res;
// }
int trapWater(int arr[], int n)
{
    int res = 0;
    int lMax[n], rMax[n];
    lMax[0] = arr[0];
    for (int i = 1; i < n; i++)
        lMax[i] = max(lMax[i - 1], arr[i]);

    rMax[n - 1] = arr[n - 1];
    for (int i = n - 1; i >= 0; i--)
        rMax[i] = max(rMax[i + 1], arr[i]);

    for (int i = 1; i < n - 1; i++)
        res = res + min(lMax[i], rMax[i]) - arr[i];
    return res;
}
int main()
{
    int arr[] = {2, 0, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << trapWater(arr, size);
    return 0;
}