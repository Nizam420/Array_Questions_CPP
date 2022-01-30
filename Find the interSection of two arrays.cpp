#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void interSection (int a[], int b[], int n, int m)
{
    int i = 0, j = 0;
    while (i < n && j < n)
    {
        if (a[i] > b[j])
        {
            j++;
        }
        else if (b[j] > a[i])
        {
            i++;
        }
        else
        {
            cout << a[i] << " ";
            j++;
            i++;
        }
    }
}
int main()
{
    int a[] = {1, 2, 4, 3, 6};
    int b[] = {4, 6};
    int n = sizeof(a) / sizeof(a[0]);
    int m = sizeof(b) / sizeof(b[0]);
    sort (a, a + n);
    sort (b, b + m);
    interSection (a, b, n, m);
    return 0;
}
