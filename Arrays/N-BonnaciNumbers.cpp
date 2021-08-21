#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 4, m = 10;
    int arr[m] = {0};
    for (int i = 0; i < n - 1; i++)
        arr[i] = 0;
    arr[n - 1] = 1;

    int s = arr[n - 1];
    for (int i = 0; i < m; i++)
    {
        arr[n + i] = s;
        s += arr[n + i] - arr[i];
    }

    for (int i = 0; i < m; i++)
        cout << arr[i] << " ";
    return 0;
}