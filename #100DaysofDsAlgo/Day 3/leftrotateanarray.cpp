/* Rotate an array
1> Left rotate array by one
2> Left rotate an array by naive method
3> left rotate an array by efficient method
4> left rotate an array by efficient reversal method
*/



#include <bits/stdc++.h>
using namespace std;

/* 1> 
Left rotate array by one
Time=O(n)
Sapce=O(d)
*/
void leftrotateone(int a[], int n)
{
    int temp = a[0];
    for (int i = 1; i < n; i++)
    {
        a[i - 1] = a[i];
    }
    a[n - 1] = temp;
}

/* 2>
Left rotate an array by naive method
Time=O(n*d)
Sapce=O(d)
*/

void leftrotatednaive(int a[], int n, int d)
{
    for (int i = 0; i < d; i++)
    {
        leftrotateone(a, n);
    }
}

/* 3>
left rotate an array by efficient method
Time=O(n)
Sapce=O(d)
*/

void leftrotateefficient(int a[], int n, int d)
{
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

/* 4>
left rotate an array by efficient reversal method
Time=O(n)
Sapce=O(1)
*/

void reverse(int a[], int low, int high)
{
    while (high>low)
    {
        swap(a[low], a[high]);
        low++;
        high--;
    }
}

void leftrotateefficientreversal(int a[], int n, int d)
{
    reverse(a, 0, d - 1);
    reverse(a, d, n - 1);
    reverse(a, 0, n - 1);
}


// Driver Code
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, d;
    cin >> n >> d;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // leftrotateone(a,n);

    // leftrotatednaive(a,n,d);

    // leftrotateefficient(a, n, d);

    leftrotateefficientreversal(a,n,d);

    cout << "After left roate an array\n";

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}