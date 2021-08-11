#include <bits/stdc++.h>
using namespace std;
void reverse(int arr[], int size)
{
    int low = 0;
    int high = size - 1;
    while (low < high)
    {
        swap(arr[low], arr[high]);
        low++;
        high--;
    }
}
int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    reverse(arr, 5);
    for (int i = 0; i < 5; i++)
        cout << arr[i] << " ";
}