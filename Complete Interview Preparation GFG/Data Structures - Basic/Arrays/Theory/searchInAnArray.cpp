/*
===> Complete Interview Preparation Geeks for Geeks Course

--> Data Structures - Basic

Topic - Arrays

Date - 02/12/2020
Author - Bikram Purkait

*/

/*

-----> Search Element in an Array

*/

#include <bits/stdc++.h>
using namespace std;

/*
Search element and print its index
Time=O(n)
Space=O(1)
*/

int searchelement(int a[], int n, int x)
{

    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            return i + 1;
        }
    }
    return -1;
}

// Driver Code
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, x;
    cin >> n >> x;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << searchelement(a, n, x);

    return 0;
}