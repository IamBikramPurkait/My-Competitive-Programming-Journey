// Remove Duplicates an Array 

#include <bits/stdc++.h>
using namespace std;

/*
Naive Method
Time=O(n) 
Space=O(n) 
*/

int removeduplicatesnaive(int a[], int n)
{
    int temp[n];
    temp[0] = a[0];
    int res = 1;
    for (int i = 1; i < n; i++)
    {
        if (temp[res - 1] != a[i])      //10, 20, 20, 30, 30, 30
        { 
            temp[res] = a[i];
            res++;
        }
    }
    for (int i = 0; i < res; i++) 
    {
        a[i] = temp[i];
    }

    return res;
}

/*
Efficient Method
Time=O(n) 
Space=O(1) 
*/


int removeduplicatesefficient(int a[],int n){
    int res=1;
    for(int i=1;i<n;i++){
        if(a[i]!=a[res-1]){
            a[res]=a[i];
            res++;
        }
    }
    return res;
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

    cout << "After Removal\n";
    // n = removeduplicatesnaive(a, n);
    n=removeduplicatesefficient(a,n);

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}