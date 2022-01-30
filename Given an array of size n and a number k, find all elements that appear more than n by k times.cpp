#include <bits/stdc++.h>
using namespace std;
void nk (int arr[], int n, int k)
{
    int x = n / k;
    unordered_map<int, int>freq;
    for (int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
    }
    for (auto i : freq)
    {
        if (i.second > x)
        {
            cout << i.first << endl;
        }
    }
}
int main()
{
    int arr[] = {3, 2, 7, 2, 3, 9, 2, 4, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 6;
    nk(arr, n, k);
    return 0;
}
