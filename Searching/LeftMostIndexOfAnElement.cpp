#include <bits/stdc++.h>
using namespace std;
void binSearch(int arr[], int size, int s)
{
    int low = 0, high = size - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == s && (mid == 0 || arr[mid - 1] != s))
        {
            cout << "Element found at position " << mid + 1;
            return;
        }
        else if (arr[mid] < s)
            low = mid + 1;
        else if (s <= arr[mid])
            high = mid - 1;
    }
    cout << "Element not found!";
}
int main()
{
    int arr[] = {2, 2, 3, 3, 3, 3, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    binSearch(arr, size, 3);
    return 0;
}