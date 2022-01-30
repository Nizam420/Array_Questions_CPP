#include<bits/stdc++.h>
using namespace std;
 bool find3Numbers(int arr[], int N, int X)
    {
        //Your Code Here
        int l, r;
        sort (arr, arr+N);

    // Fix the first element as A[i]
    for (int i = 0; i < N - 2; i++)
    {
        l = i+1;
        r = N-1;

        // Fix the second element as A[j]
       while (l < r){

            // Now look for the third number

                if (arr[i] + arr[l] + arr[r] == X)
                {

                    return true;
                }
                else if(arr[i] + arr[l] + arr[r] < X)
                    l++;
                else
                    r--;
        }
    }
    return false;
    }
int main()
{
    int arr[] = { 1, 4, 45, 6, 10, 8 };
    int X = 22;
    int N = sizeof(arr) / sizeof(arr[0]);
    cout << find3Numbers(arr, N ,X);
    return 0;
}
