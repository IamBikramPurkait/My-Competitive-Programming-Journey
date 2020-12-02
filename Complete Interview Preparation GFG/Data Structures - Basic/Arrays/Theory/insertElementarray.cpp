/*
===> Complete Interview Preparation Geeks for Geeks Course

--> Data Structures - Basic

Topic - Arrays

Date - 02/12/2020
Author - Bikram Purkait

*/

/*

-----> Insert element in an array

*/

#include <bits/stdc++.h>
using namespace std;

/*
Insert at given index
Time=O(n)
Space=O(1)
*/

int insertelementindex(int a[], int capacity, int n, int index, int element)
{
    if (capacity == n)
    {
        return -1;
    }

    int idx = index - 1;

    for (int i = n - 1; i >= idx; i--)
    {
        a[i + 1] = a[i];
    }
    a[idx] = element;

    return n + 1;
}

/*
Insert at end
Time=O(1)
Space=O(1)
*/

int insertelementend(int a[], int capacity, int n, int element)
{
    if (n == capacity)
    {
        return -1;
    }
    a[n] = element;

    return n+1;
}


/*
Insert at begining
Time=O(1)
Space=O(1)
*/

int insertelementbegining(int a[], int capacity, int n, int element)
{
    if (n == capacity)
    {
        return -1;
    }
    for(int i=n-1;i>=0;i--){
        a[i+1]=a[i];
    }

    a[0]=element;

    return n+1;
}
// Driver Code
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int capacity, n, index, element;
    cin >> capacity >> n >> index >> element;
    int a[capacity];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // n = insertelementindex(a, capacity, n, index, element);
    // n = insertelementend(a, capacity, n, element);
    n = insertelementbegining(a, capacity, n, element);

    cout << n << endl;

    cout << "After insert elemnt" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}