#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,a,b,n,dummy=0,fmin,fmax;
    cin>>tc;
    while(tc--){
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n,greater<int>());
        // n==3
        if(n==3)
        {
        a=arr[0];
        b=arr[1];
        dummy+=min(a,b);
        if(a<b){
            b=abs(a-b);
            a=arr[2];
        }
        else{
            a=abs(a-b);
            b=arr[2];
        }
            dummy+=max(a,b);
            cout<<dummy<<"\n";
            dummy=0;
        }
        // n==1
        else if(n==1)
            cout<<arr[0]<<"\n";
        // n==2
        else if(n==2){
            dummy=max(arr[0],arr[1]);
            cout<<dummy<<"\n";
            dummy=0;
        }
        // n==4
        else{
        a=arr[0];
        b=arr[1];
        dummy+=min(a,b);
        if(a<b){
            b=abs(a-b);
            a=arr[2];
        }
        else{
            a=abs(a-b);
            b=arr[2];
        }
        dummy+=min(a,b);
        if(a<b){
            b=abs(a-b);
            a=arr[3];
        }
        else{
            a=abs(a-b);
            b=arr[3];
        }
        dummy+=max(a,b);
        cout<<dummy<<"\n";
        dummy=0;
        }
        }
    return 0;
}