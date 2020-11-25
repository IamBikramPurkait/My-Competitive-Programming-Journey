// Who has the majority?

// https://practice.geeksforgeeks.org/problems/who-has-the-majority/1/?track=dsa-self-paced-preview-arrays&batchId=174#

/************************************************************************************************************
Given an array arr[] of size N and two elements x and y, use counter variables to find which element appears
most in the array, x or y. If both elements have the same frequency, then return the smaller element.
Note: We need to return the element, not its count.
*************************************************************************************************************/

// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

int majorityWins(int arr[], int n, int x,int y);

 // } Driver Code Ends


//User function Template for C++

int majorityWins(int arr[], int n, int x,int y)
{
    // code here  
    int count_x=0,count_y=0;
    for(int i=0;i<n;i++){
        if(arr[i]==x)
            count_x++;
        else if(arr[i]==y)
            count_y++;
    }
    if(count_x>count_y)
        return x;
    else if(count_y>count_x)
        return y;
    else
        return min(x,y);
}

// { Driver Code Starts.

int main() {
    
    int t; //Testcases
    cin>>t; // Input the testcases
    while(t--) //Until all testcases are exhausted
    {
        int n; //Size of array
        cin>>n; //Input the size
        int arr[n]; //Declaring array of size n
        for(int i=0;i<n;i++) // Running a loop to input all elements of arr
        cin>>arr[i];
        
        int x,y; //declare x and y
        cin>>x>>y; // input x and y
        cout << majorityWins(arr,n,x,y) << endl; //calling the function that you complete
        
    }
    
	return 0;
}  // } Driver Code Ends