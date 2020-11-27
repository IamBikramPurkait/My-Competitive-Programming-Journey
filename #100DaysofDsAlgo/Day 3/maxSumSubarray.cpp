//  Max of Sum SubArray
//  Kadane's algorithm

#include <bits/stdc++.h>
using namespace std;

/* Naive Method
Time=O(N*N)
Space=O(1)
*/

int maxsubarraynaive(int a[], int n)
{
    int res = a[0];
    for (int i = 0; i < n; i++)
    {
        int curr = 0;
        for (int j = i; j < n; j++)
        {
            curr += a[j];
            res = max(res, curr);
        }
    }
    return res;
}

/* Efficient Method - Kadane's Algorithm
Time=O(N)
Space=O(1)
*/

int maxsubarrayefficient(int a[], int n)
{
    int res = a[0];
    int maxEnding = a[0];
    for (int i = 1; i < n; i++)
    {
        maxEnding = max(maxEnding + a[i], a[i]);
        res=max(res,maxEnding);
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

    // cout << maxsubarraynaive(a, n);
    cout << maxsubarrayefficient(a, n);

    return 0;
}