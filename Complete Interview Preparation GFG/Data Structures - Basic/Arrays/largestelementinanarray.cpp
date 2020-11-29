/*
===> Complete Interview Preparation Geeks for Geeks Course

--> Data Structures - Basic

Topic - Arrays

Date - 29/11/2020
Author - Bikram Purkait

*/



/*

-----> Find Largest Element in an array and print its index

*/







#include <bits/stdc++.h>
using namespace std;

/*
Efficient approach
Time=O(n)
Space=O(1)
*/

int largestelement(int a[], int n)
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

int largestelementnaive(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        bool flag = true;
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] > a[i])
            {
                flag = false;
                break;
            }
        }
        if (flag == true)
        {
            return i;
        }
    }
}

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
    // cout<<largestelement(a,n)<<endl;
    cout << largestelementnaive(a, n) << endl;
    return 0;
}