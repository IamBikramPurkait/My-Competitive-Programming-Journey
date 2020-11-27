//  Longest Even Odd Sub Array

#include <bits/stdc++.h>
using namespace std;

/* Naive Method
Time=O(N*N)
Space=O(1)
*/

int longestevenoddnaive(int a[], int n)
{
    int res = 1;
    for (int i = 0; i < n; i++)
    {
        int curr = 1;
        for (int j = i + 1; j < n; j++)
        {
            if ((a[j] % 2 == 0 and a[j - 1] % 2 != 0) || (a[j - 1] % 2 == 0 and a[j] % 2 != 0))
            {
                curr++;
            }
            else
            {
                break;
            }
        }
        res = max(res, curr);
    }
    return res;
}

/* Efficient Method - kadane's ALgorithm
Time=O(N)
Space=O(1)
*/

int longestevenoddefficient(int a[], int n)
{
    int res = 1;
    int curr=1;
    for (int i = 1; i < n; i++)
    {
        if((a[i]%2==0 and a[i-1]%2!=0)or(a[i-1]%2==0 and a[i]%2!=0)){
            curr++;
            res=max(res,curr);
        }
        else{
            curr=1;
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

    // cout << longestevenoddnaive(a, n);
    cout << longestevenoddefficient(a, n);

    return 0;
}