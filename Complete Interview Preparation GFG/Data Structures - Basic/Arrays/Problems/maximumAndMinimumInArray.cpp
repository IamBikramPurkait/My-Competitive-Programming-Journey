// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

//Complete the below functions
int maximumElement(int arr[], int n)
{
    //Your code here
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int minimumElement(int arr[], int n)
{
    //Your code here
    int min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        cout << maximumElement(arr, n) << " " << minimumElement(arr, n) << endl;
    }
    return 0;
} // } Driver Code Ends