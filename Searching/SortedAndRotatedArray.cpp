#include <bits/stdc++.h>
using namespace std;
int binSearch(int arr[], int low, int high, int e)
{
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == e)
            return mid;
        else if (arr[mid] > e)
            high = mid - 1;
        else
            low = mid + 1;
    }
    return -1;
}
int getPivot(int arr[], int size)
{
    int low = 0, high = size - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] > arr[mid + 1])
            return mid;
        else if (arr[mid] > arr[mid - 1])
            low = mid + 1;
        else
            high = mid - 1;
    }
}
int main()
{
    int arr[] = {10, 20, 30, 6, 7, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    int p = getPivot(arr, size);
    int e = 9;
    int r1 = binSearch(arr, 0, p, e);
    int r2 = binSearch(arr, p + 1, size - 1, e);
    if (r1 != -1)
        cout << r1;
    else if (r2 != -1)
        cout << r2;
    else
        cout << -1;
    return 0;
}