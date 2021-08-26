#include <bits/stdc++.h>
using namespace std;
void binSearch(int arr[], int size, int s)
{
    int low = 0, high = size - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] < s)
            low = mid + 1;
        else if (arr[mid] > s)
            high = mid - 1;
        else
        {
            cout << "Element found at position " << mid + 1;
            return;
        }
    }
    cout << "Element not found!";
}
int main()
{
    int arr[] = {1, 10, 20, 40, 50, 70, 80};
    int size = sizeof(arr) / sizeof(arr[0]);
    binSearch(arr, size, 100);
    return 0;
}