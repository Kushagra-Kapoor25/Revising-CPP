#include <bits/stdc++.h>
using namespace std;
void leftRotateByOne(int arr[], int s)
{
    int cp = arr[0];
    for (int i = 0; i < s - 1; i++)
        arr[i] = arr[i + 1];
    arr[s - 1] = cp;
}
int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    leftRotateByOne(arr, size);
    for (auto x : arr)
        cout << x << "\n";
    return 0;
}