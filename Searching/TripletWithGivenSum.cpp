#include <bits/stdc++.h>
using namespace std;
bool pairSum(int arr[], int start, int size, int x)
{
    int left = start, right = size;
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
bool tripletSum(int arr[], int size, int x)
{
    for (int i = 0; i < size; i++)
        if (pairSum(arr, i + 1, size - 1, x - arr[i]))
            return true;
    return false;
}
int main()
{
    int arr[] = {2, 3, 4, 8, 9, 20, 40};
    int size = sizeof(arr) / sizeof(arr[0]);
    int x = 2;
    cout << tripletSum(arr, size, x);
    return 0;
}