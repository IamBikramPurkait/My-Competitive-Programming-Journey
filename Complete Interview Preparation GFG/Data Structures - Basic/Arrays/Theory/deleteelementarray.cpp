/*
===> Complete Interview Preparation Geeks for Geeks Course

--> Data Structures - Basic

Topic - Arrays

Date - 02/12/2020
Author - Bikram Purkait

*/

/*

-----> Delete element from an array

*/

#include <bits/stdc++.h>
using namespace std;

/*
Delete element from an array by given element
Time=O(n)
Space=O(1)

Example -->
Delete --> 12

Before Deletion
3 8 12 5 6 
After Deletion
3 8 5 6 
*/

int deletebyelement(int a[], int n, int x)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            break;
        }
    }
    if (n == i)
    {
        return n;
    }

    for (int j = i; j < n; j++)
    {
        a[j] = a[j + 1];
    }
    return n - 1;
}

/*
Delete element from an array by given index
Time=O(n)
Space=O(1)

Example -->
Delete -->index 3 element

Before Deletion
3 8 12 5 6 
After Deletion
3 8 5 6 
*/

int deletebyindex(int a[], int n, int idx)
{
    if(idx>n || idx<1)
    {
        return n;
    }

    for(int i=idx-1;i<n;i++)
    {
        a[i]=a[i+1];
    }

    return n - 1;
}

// Driver Code
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, x, index;
    cin >> n >> index;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // n = deletebyelement(a, n, x);
    n = deletebyindex(a, n, index);

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}