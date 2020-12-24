#include<bits/stdc++.h>
using namespace std;


int main() {
    int t;
    string s;
    cin>>t;
    while(t--)
    {
        int mb=0,eb=0,g;
        cin>>g;
        for(int i=0;i<g;i++)
        {
            cin>>s;
            if((s.compare("MB")) == 0) 
                mb++;
            else
                eb++;
        }
        if(mb>eb)
            cout<<"Mohun Bagan"<<endl;
        else if(eb>mb)
            cout<<"East Bengal"<<endl;
        else
            cout<<"Draw"<<endl;
    }
    return 0;
}