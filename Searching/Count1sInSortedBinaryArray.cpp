#include <bits/stdc++.h>
using namespace std;
int countOnes(int arr[], int size)
{
    int low = 0, high = size - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == 1 && (mid == 0 || arr[mid - 1] != 1))
            return size - mid;
        else if (arr[mid] == 0)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}
int main()
{
    int bin[] = {0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int size = sizeof(bin) / sizeof(bin[0]);
    cout << countOnes(bin, size);
    return 0;
}