#include <bits/stdc++.h>
using namespace std;
int insert(int arr[], int size, int x, int cap, int pos)
{
    if (cap == size)
        return size;
    int index = pos - 1;
    for (int i = size - 1; i >= index; i--)
        arr[i + 1] = arr[i];
    arr[index] = x;
    return size + 1;
}
int main()
{
    int arr[5];
    arr[0] = 1;
    arr[1] = 2;
    int size = 2;
    int cap = 5;
    size = insert(arr, size, 3, cap, 1);
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    return 0;
}