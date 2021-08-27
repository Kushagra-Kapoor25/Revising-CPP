#include <bits/stdc++.h>
using namespace std;
int findPeakElement(int arr[], int size)
{
    int low = 0, high = size - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if ((mid == 0 || arr[mid] >= arr[mid - 1]) && (mid == size - 1 || arr[mid] >= arr[mid + 1]))
            return arr[mid];
        else if (mid > 0 && arr[mid] < arr[mid - 1])
            high = mid - 1;
        else
            low = mid + 1;
    }
    return -1;
}
int main()
{
    int arr[] = {10, 20, 15, 5, 23, 90, 67};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << findPeakElement(arr, size);
    return 0;
}