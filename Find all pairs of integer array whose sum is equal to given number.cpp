#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int pairCount (int arr[], int n, int sum)
{
    int count = 0;
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (arr[i] + arr[j] == sum)
            count++;
        return count;
}
int main()
{
    int arr[] = {2, 4, 3, 3, 1, 9, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 6;
    cout << "Count pairs are " << pairCount (arr, n, sum);
    return 0;
}
