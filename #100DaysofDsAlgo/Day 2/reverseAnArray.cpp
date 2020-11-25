// Revarse An Array

/*
1> Iterative Method
2> Recursive Method
*/

#include <bits/stdc++.h>
using namespace std;

// Iterative Method
void reverse_iterative(int a[], int n)
{
    int low = 0, high = n - 1;
    while (high > low)
    {
        int temp = a[low];
        a[low] = a[high];
        a[high] = temp;
        low++;
        high--;
    }
}

// Recursive Method
void reverse_recursive(int arr[], int start, int end)
{
    if (start >= end)
        return;

    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;

    // Recursive Function calling
    reverse_recursive(arr, start + 1, end - 1);
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
    cout << "Array in Reverse Order\n";

    // reverse_iterative(a, n);

    reverse_recursive(a, 0, n - 1);

    //C++ Inbuilt reverse function
    // reverse(a,a+n);

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}