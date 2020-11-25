#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n],max=INT_MIN,min=INT_MAX;;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            if(a[i]>max){
                max=a[i];
            }
            else
                min=a[i];
        }
        cout<<max<<" "<<min<<endl;
    }
    return 0;
}