#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void printUnion (int *a, int n, int *b, int m)
{
    map <int, int> mp;
    for (int i = 0; i < n; i++)
    mp.insert({a[i], i});
    for (int i = 0; i < m; i++)
    mp.insert({b[i], i});
    cout << "The union of both array is " << endl;
    for (auto itr = mp.begin(); itr != mp.end(); itr++)
        cout << itr->first << " ";
}
int main()
{
    int a[5] = {3, 5, 1, 8, 9};
    int b[3] = {5, 2, 4};
    printUnion (a, 5, b, 3);
    return 0;
}
