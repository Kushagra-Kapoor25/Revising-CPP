#include <bits/stdc++.h>
using namespace std;
int linearSearch(int arr[], int n, int x)
{
    for (int i = 0; i < n; i++)
        if (arr[i] == x)
            return i;
    return -1;
}
int main()
{
    int arr[] = {20, 15, 30, 29, 40};
    int size = 5;
    int s = 40;
    int index = linearSearch(arr, size, s);
    cout << index << "\n";
}