/*
===> Complete Interview Preparation Geeks for Geeks Course

--> Data Structures - Basic

Topic - Arrays

Date - 02/12/2020
Author - Bikram Purkait

*/

/*

-----> Reverse an array

*/

#include <bits/stdc++.h>
using namespace std;

/*
Time=O(n)
Space=O(1)
*/

void reversearray(int a[], int n)
{
    int low = 0, high = n - 1;

    while(high>low){
        swap(a[low],a[high]);
        low++;
        high--;
    }
}

// Driver Code
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    reversearray(a, n);

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}