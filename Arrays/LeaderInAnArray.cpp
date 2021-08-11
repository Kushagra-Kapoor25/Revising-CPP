#include <bits/stdc++.h>
using namespace std;
void leader(int arr[], int s)
{
    int l = arr[s - 1];
    int res[s];
    cout << l << " ";
    for (int i = s - 2; i >= 0; i--)
    {
        if (arr[i] > l)
        {
            l = arr[i];
            cout << l << " ";
        }
    }
}
int main()
{
    int arr[] = {7, 10, 4, 10, 6, 5, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    leader(arr, size);
    return 0;
}