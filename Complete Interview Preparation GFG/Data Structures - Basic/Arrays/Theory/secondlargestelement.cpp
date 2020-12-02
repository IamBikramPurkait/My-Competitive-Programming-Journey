/*
===> Complete Interview Preparation Geeks for Geeks Course

--> Data Structures - Basic

Topic - Arrays

Date - 01/12/2020
Author - Bikram Purkait

*/

/*

-----> Find Second Largest Element in an array and print its index

*/

#include <bits/stdc++.h>
using namespace std;

/*
Efficient approach
Time=O(n)
Space=O(1)
*/

int secondlargestelement(int a[], int n)
{
    int max = INT_MIN, index;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            index = i;
            max = a[i];
        }
    }
    return index;
}

/*
Naive aprroach
Time=O(n*n)
Space=O(1)
*/

int getlargest(int a[], int n)
{
    int largest = 0;
    for (int i = 1; i < n; i++)
    {
        if (a[i] > a[largest])
            largest = i;
    }
    return largest;
}

int secondlargestelementnaive(int a[], int n)
{
    int largest = getlargest(a, n);
    int res = -1;
    for (int i = 0; i < n; i++)
    {
        if(a[largest]!=a[i])
        {
            if (res == -1)
                res = i;
            else if (a[i] > a[res])
                res = i;
        }
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
    // cout<< secondlargestelement(a,n)<<endl;
    cout << secondlargestelementnaive(a, n) << endl;
    return 0;
}