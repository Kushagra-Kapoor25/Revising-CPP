#include <bits/stdc++.h>
using namespace std;
// Moorey's Voting algo
int findMajority(int arr[], int n)
{
    // First phase: Finds a candidate
    int res = 0, count = 1;
    for (int i = 1; i < n; i++)
    {
        if (arr[res] == arr[i])
            count++;
        else
            count--;
        if (count == 0)
        {
            res = i;
            count = 1;
        }
    }

    // Second phase: Checks if the candidate is actually majority
    count = 0;
    for (int i = 0; i < n; i++)
        if (arr[res] == arr[i])
            count++;
    if (count <= n / 2)
        res = -1;
    return res;
}
int main()
{
    int arr[] = {8, 7, 6, 8, 6, 6, 6, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << findMajority(arr, size);
    return 0;
}