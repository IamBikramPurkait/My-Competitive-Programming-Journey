#include<bits/stdc++.h>
#include<iostream>

using namespace std;
int main()
{
    int n,m,k;
    cin>>n>>m>>k;
    int count=0;
    while(n--){
        int arr[k+1],sum=0;
        for(int i=0;i<k+1;i++){
            cin>>arr[i];
            sum+=arr[i];
        }
        int temp;
        temp=sum-arr[k];
        int q=arr[k];
        
        if(q<=10 && m<=temp){
        count++;
        }
        sum=0;
        
    }
    cout<< count ;
    return 0;
}