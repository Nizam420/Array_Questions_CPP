// Find the next lexicographically
// greater permutation of a word

#include <algorithm>
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
	array<int,3>s = {3, 2, 1};
	bool val= next_permutation(s.begin(),s.end());
	for (int i = 0; i<= 2; i++)
    {
		cout << s[i] << " ";
    }
	return 0;
}
