#include<bits/stdc++.h>
typedef long long ll;

using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n,x,y,a,b,c;
    cin>>n;
    cin>>x>>y;
    priority_queue<ll>pq;
    pq.push(x);
    pq.push(y);
    vector<ll>v;
    v.push_back(-1);
    v.push_back(-1);
    for(ll i=2;i<n;i++){
        cin>>c;
        pq.push(c);

        a=pq.top();
        pq.pop();

        b=pq.top();
        pq.pop();

        c=pq.top();

        v.push_back(a*b*c);

        pq.push(a);
        pq.push(b);
    }

    for(auto it:v){
        cout<<it<<endl;
    }

    return 0;
}