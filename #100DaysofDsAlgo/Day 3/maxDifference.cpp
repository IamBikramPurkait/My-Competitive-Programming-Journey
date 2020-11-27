// Maximum Difference problem is to find the maximum of arr[j] - arr[i] where j>i.

#include <bits/stdc++.h>
using namespace std;

/*
Naive Method
Time=O(N*N)
Space=O(1)
*/
int maxdifferencenaive(int a[], int n)
{
    int res = a[1] - a[0];
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            res = max(res, a[j] - a[i]);
        }
    }
    return res;
}

/*
Efficient Method
Time=O(N)
Space=O(1)
*/

int maxdifferenceefficient(int a[],int n){
    int res=a[1]-a[0];
    int min_val=a[0];
    for(int j=1;j<n;j++){
        res=max(res,a[j]-min_val);
        min_val=min(min_val,a[j]);
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

    // cout<<maxdifferencenaive(a,n);

    cout<<maxdifferenceefficient(a,n);

    return 0;
}