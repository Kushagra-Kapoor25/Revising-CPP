#include <bits/stdc++.h>
using namespace std;
int remDups(int arr[], int size)
{
    int res = 1;
    for (int i = 1; i < size; i++)
    {
        if (arr[res - 1] != arr[i])
        {
            arr[res] = arr[i];
            res++;
        }
    }
    return res;
}
int main()
{
    int arr[] = {10, 10, 20, 20, 20, 30, 30, 30, 40};

    int new_size = remDups(arr, 9);
    for (int i = 0; i < new_size; i++)
        cout << arr[i] << " ";
    return 0;
}