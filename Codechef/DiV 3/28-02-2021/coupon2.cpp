#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin>>t;
    while(t--){
        ll d,c;
        cin>>d>>c;
        ll a[3],b[3];
        ll suma=0,sumb=0;
        for(ll i=0;i<3;i++){
            cin>>a[i];
            suma+=a[i];
        }
        for(ll i=0;i<3;i++){
            cin>>b[i];
            sumb+=b[i];
        }

        if(suma>=150 and sumb>=150){
            if((suma+sumb+c)<(suma+sumb+2*d))
            cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl;
        }
        else if((suma>=150 and sumb<150) or (suma<150 and sumb>=150)){
            if((suma+sumb+2*d)>(suma+sumb+c+d))
            cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl;
        }
        else {
            if((suma+sumb+2*d)>(suma+sumb+c+2*d))
            cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl;
        }
        
        

        
    }
    return 0;
}