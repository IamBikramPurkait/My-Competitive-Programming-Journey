/*
===> Complete Interview Preparation Geeks for Geeks Course

--> Data Structures - Basic

Topic - Arrays

Date - 02/12/2020
Author - Bikram Purkait

*/

/*

-----> Remove a duplicate from a sorted array

*/

#include <bits/stdc++.h>
using namespace std;

/*
Efficient approach
Time=O(n)
Space=O(1)
*/

/* Example
Input -->
6
10 20 20 30 30 30
Output -->
3
After Removal Duplicate
10 20 30
*/

int removeduplicatesorted(int a[], int n)
{
    int res = 1;
    for (int i = 1; i < n; i++)
    {
        if (a[res - 1] != a[i])
        {
            a[res] = a[i];
            res++;
        }
    }
    return res;
}

/*
Naive aprroach
Time=O(n)
Space=O(n)
*/

int removeduplicatesortednaive(int a[], int n)
{
    int temp[n];
    int res = 1;
    temp[0] = a[0];
    for (int i = 1; i < n; i++)
    {
        if (temp[res - 1] != a[i])
        {
            temp[res] = a[i];
            res++;
        }
    }
    for (int i = 0; i < res; i++)
    {
        a[i] = temp[i];
    }
    return res;
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

    // n = removeduplicatesortednaive(a, n);
    n = removeduplicatesorted(a, n);

    cout << n << endl;
    cout << "After Removal Duplicate" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}