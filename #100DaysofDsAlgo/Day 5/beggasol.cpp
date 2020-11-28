#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    int n,sum=0;
    
    while(t--){
        
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
        }
        // for(int i=0;i<n;i++){
        //     sum+=a[i];
        // }
        cout<<sum<<endl;
        sum=0;
    }
    return 0;
}