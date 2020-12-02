/*
===> Complete Interview Preparation Geeks for Geeks Course

--> Data Structures - Basic

Topic - Arrays

Date - 02/12/2020
Author - Bikram Purkait

*/

/*

-----> Rotate an array by one

*/

#include <bits/stdc++.h>
using namespace std;

/*
Time=O(n)
Space=O(1)
*/

void roatearrayone(int a[], int n)
{
    int temp = a[0];

    for (int i = 1; i < n; i++)
    {
        a[i - 1] = a[i];
    }
    a[n - 1] = temp;
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
    
    roatearrayone(a, n);

    for (int i = 0; i < n; i++)
    {
        cout << a[i]<<" ";
    }

    return 0;
}