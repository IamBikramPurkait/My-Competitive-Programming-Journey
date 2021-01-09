#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n,k,sum=0;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[n];
            sum+=a[i];
        }
        if(sum%k==0){
            cout<<"0"<<endl;
        }
        else{
            cout<<"1"<<endl;
        }
        

    }
    return 0;
}