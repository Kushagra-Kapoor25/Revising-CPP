#include <bits/stdc++.h>
using namespace std;
const int R = 4;
const int C = 4;
void searchInMat(int mat[][C], int s)
{
    int i = 0, j = C - 1;
    while (i < R && j >= 0)
    {
        if (s < mat[i][j])
            j--;
        else if (s > mat[i][j])
            i++;
        else
        {
            cout << "Found";
            return;
        }
    }
    cout << "Element not present.";
}
int main()
{
    int mat[R][C] = {{10, 20, 30, 40},
                     {15, 25, 35, 45},
                     {27, 29, 37, 48},
                     {32, 33, 39, 50}};
    int s = 32;
    searchInMat(mat, s);
    return 0;
}