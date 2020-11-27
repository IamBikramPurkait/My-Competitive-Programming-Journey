// Max Consequtives 1's

#include <bits/stdc++.h>
using namespace std;

/*
Naive Method
Time=O(N*N)
Space=O(1)
*/

int maxcon1snaive(int a[], int n)
{
    int res = 0;

    for (int i = 0; i < n; i++)
    {
        int curr = 0;

        for (int j = i; j < n; j++)
        {
            if (a[j] == 1)
                curr++;
            else
                break;
        }

        res = max(res, curr);
    }

    return res;
}

/*
Efficient Method
Time=O(N)
Space=O(1)
*/

int maxcon1sefficient(int a[], int n)
{
    int res=0,curr=0;
    for(int i=0;i<n;i++){
        if(a[i]==0){
            curr=0;
        }
        else{
            curr++;
            res=max(res,curr);
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

    // cout << maxcon1snaive(a, n);

    cout << maxcon1sefficient(a, n);

    return 0;
}
