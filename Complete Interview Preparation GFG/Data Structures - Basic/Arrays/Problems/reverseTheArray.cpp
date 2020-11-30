// { Driver Code Starts
//Initial Template for C++

#include <iostream>
using namespace std;

// } Driver Code Ends

//User function Template for C++

//Complete this function
int reverseArray(int arr[], int n)
{
    //Your code here
    int low = 0, high = n - 1;
    while (low < high)
    {
        swap(arr[low], arr[high]);
        low++;
        high--;
    }

    return 0;
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

        reverseArray(arr, n);

        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }

        cout << endl;
    }
    return 0;
} // } Driver Code Ends