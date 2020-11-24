#include<iostream>
typedef long long int ll;
#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<long long int> prime;

    for (ll i = 2; i <= 1299720; i++)
    {
        ll c = 0;
        for (ll j = 2; j <= sqrt(i); j++)
        {
            if (i % j == 0)
            {
                c = 1;
                break;
            }
        }
        if (c == 0)
            prime.push_back(i);
    }
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<ll> a;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            a.push_back(x);
        }
        ll b[n];

        for (ll i = 0; i < n; i++)
        {
            b[i] = prime[i];
        }

        for (ll i = 0; i < n; i++)
        {
            if (a[i] != (i + 1))
            {
                b[i] = b[a[i] - 1];
            }
        }

        for (ll i = 0; i < n; i++)
        {
            cout << b[i] << " ";
        }

        cout << endl;
    }
    return 0;
}