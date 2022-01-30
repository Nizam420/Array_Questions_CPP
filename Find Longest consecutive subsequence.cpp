#include<bits/stdc++.h>
using namespace std;
int LCSS (int arr[], int n)
{
    int ans = 0, count = 0;
    sort (arr, arr+n);
    vector<int>v;
    v.push_back(arr[0]);
    for (int i = 1; i < n; i++)
    {
        if (arr[i] != arr[i-1])
            v.push_back(arr[i]);
    }
    for (int i = 0; i < v.size(); i++)
    {
        if (i > 0 && v[i] == v[i-1]+1)
            count++;
        else
            count = 1;
        ans = max(ans, count);
    }
    return ans;
}
int main()
{
    int arr[] = { 8, 1, 6, 4, 9, 7, 3 };
    int n = sizeof (arr) / sizeof (arr[0]);
    cout << "Length of the Longest contiguous subsequence "
            "is "
         << LCSS(arr, n);
    return 0;
}
