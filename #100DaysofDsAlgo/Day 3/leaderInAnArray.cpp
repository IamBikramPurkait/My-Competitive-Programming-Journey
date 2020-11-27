// Leader in an array


#include<bits/stdc++.h>
using namespace std;

/*
Naive Method
Time=O(N*N)
Space=O(1)
*/
void leaders(int arr[], int n)
{
	for(int i = 0; i < n; i++)
	{
		bool flag = false;
		for(int j = i + 1; j < n; j++)
		{
			if(arr[i] <= arr[j])
			{
				flag = true;
				break;
			}
		}

		if(flag == false)
		{
			cout<<arr[i]<<" ";
		}
	}
}

/*
Efficient Method - reversely print the output
Time=O(N)
Space=O(1)
*/

void leaderefficientreverse(int a[],int n){
    int curr=a[n-1];
    cout<<curr<<" ";
    for(int i=n-2;i>=0;i--){
        if(a[i]>curr){
            curr=a[i];
            cout<<curr<<" ";
        }
    }
}

/*
Efficient Method - Print in Correct order 
Time=O(N)
Space=O(N)
*/

void leaderefficient(int a[],int n){
    int temp[n],count=0;
    int curr=a[n-1];
    cout<<curr<<" ";
    for(int i=n-2;i>=0;i--){
        if(a[i]>curr){
            curr=a[i];
            temp[count]=curr;
            count++;
        }
    }
    for(int i=0;i<count;i++){
        cout<<temp[i]<<" ";
    }
}

// Driver Code
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    // leaders(arr,n);
    // leaderefficientreverse(arr,n);

    leaderefficient(arr,n);

    return 0;
}