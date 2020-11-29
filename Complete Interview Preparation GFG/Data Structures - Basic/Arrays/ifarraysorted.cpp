/*
===> Complete Interview Preparation Geeks for Geeks Course

--> Data Structures - Basic

Topic - Arrays

Date - 29/11/2020
Author - Bikram Purkait

*/



/*
----->Check if an array is sorted or not
// Print 1 For Array Sorted and 0 for Array is not Sorted
// Array is sorted consider only in increasing order
*/



#include <bits/stdc++.h>
using namespace std;

/*
Naive approach
Time=O(n*n)
Space=O(1)
*/

bool isarraysortednaive(int a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		for(int j = i + 1; j < n; j++)
		{
			if(a[j] < a[i])
				return false;
		}
	}

	return true;
} 

/*
Efficient aprroach
Time=O(n)
Space=O(1)
*/

bool isarraysorted(int a[], int n)
{
    if (n <= 1)
    {
        return true;
    }
    for (int i = 1; i < n; i++)
    {
        if (a[i - 1] > a[i])
        {
            return false;
        }
    }
    return true;
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

    // Print 1 For Array Sorted and 0 for Array is not Sorted
    // Array is sorted consider only in increasing order
    // cout<<isarraysorted(a,n)<<endl;
    cout<<isarraysortednaive(a,n)<<endl;

    return 0;
}