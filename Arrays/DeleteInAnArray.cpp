#include <bits/stdc++.h>
using namespace std;
int remove(int arr[], int size, int cap, int element)
{
    if (size == 0)
        return 0;

    int index = -1;
    for (int i = 0; i < size; i++)
        if (arr[i] == element)
        {
            index = i;
            break;
        }

    if (index == -1)
        return size;

    for (int i = index; i < size; i++)
        arr[i] = arr[i + 1];

    return size - 1;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = 5;
    int cap = 5;
    size = remove(arr, size, cap, 3);
    size = remove(arr, size, cap, 1);
    size = remove(arr, size, cap, 2);
    for (int i = 0; i < size; i++)
        cout << arr[i] << "\n";
    return 0;
}