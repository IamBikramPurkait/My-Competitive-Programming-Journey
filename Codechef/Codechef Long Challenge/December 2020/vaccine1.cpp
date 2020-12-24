#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    // your code goes here
    ll d1, d2, v1, v2, p, i, sum = 0;

    cin >> d1 >> v1 >> d2 >> v2 >> p;

    for (i = 1; i <= 10000; i++)
    {
        if (d1 <= i)
            sum += v1;
        if (d2 <= i)
            sum += v2;
        if (sum >= p)
            break;
    }
    cout << i;

    return 0;
}
