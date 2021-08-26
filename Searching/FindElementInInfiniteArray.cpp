#include <bits/stdc++.h>
using namespace std;
int binarySearch(int arr[], int size, int e)
{
    int low = 0, high = size - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == e)
            return mid;
        else if (arr[mid] < e)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}
int findInInfArr(int arr[], int x)
{
    if (arr[0] == 0)
        return 0;
    int i = 1;
    while (arr[i] < x)
        i *= 2;
    if (arr[i] == 0)
        return i;
    else
        return binarySearch(arr, i, x);
}
int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 190, 200};
    int x = 31;
    cout << "Found at index : " << findInInfArr(arr, x);
    return 0;
}