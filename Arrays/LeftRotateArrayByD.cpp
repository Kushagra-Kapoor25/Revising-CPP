#include <bits/stdc++.h>
using namespace std;
void reverse(int arr[], int pos, int size)
{
    int low = pos;
    int high = size - 1;
    while (low < high)
    {
        swap(arr[low], arr[high]);
        low++;
        high--;
    }
}
void leftRotateByD(int arr[], int s, int d)
{
    reverse(arr, 0, d);
    reverse(arr, d, s);
    reverse(arr, 0, s);
}
int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    leftRotateByD(arr, size, 2);
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    return 0;
}