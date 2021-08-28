#include <bits/stdc++.h>
using namespace std;
bool pairSum(int arr[], int size, int x)
{
    int left = 0, right = size - 1;
    while (left < right)
    {
        if ((arr[left] + arr[right]) == x)
            return true;
        else if (x > (arr[left] + arr[right]))
            left++;
        else
            right--;
    }
    return false;
}
int main()
{
    int arr[] = {2, 5, 8, 12, 30};
    int size = sizeof(arr) / sizeof(arr[0]);
    int x = 2;
    cout << pairSum(arr, size, x);
    return 0;
}