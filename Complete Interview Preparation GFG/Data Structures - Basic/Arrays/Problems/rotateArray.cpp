// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

void rotateArr(int a[], int d, int n)
{
    // code here
    int temp[d];
    for (int i = 0; i < d; i++)
    {
        temp[i] = a[i];
    }

    for (int i = d; i < n; i++)
    {
        a[i - d] = a[i];
    }

    for (int i = 0; i < d; i++)
    {
        a[n - d + i] = temp[i];
    }
}
// void reverse(int arr[],int low,int high){
//     // int low=0,high=n-1;
//     while(high>low){
//         swap(arr[low],arr[high]);
//         low++;
//         high--;
//     }
// }

// { Driver Code Starts.

int main()
{
    int t;
    //taking testcases
    cin >> t;

    while (t--)
    {
        int n, d;

        //input n and d
        cin >> n >> d;

        int arr[n];

        //inserting elements in the array
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        //calling rotateArr() function
        rotateArr(arr, d, n);

        //printing the elements of the array
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;
} // } Driver Code Ends