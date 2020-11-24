// Factorial

// https://www.codechef.com/LRNDSA01/problems/FCTRL

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
        long ans = 0, n;
        cin >> n;
        while (n != 0)
        {
            ans += n / 5;
            n /= 5;
        }
        cout << ans << endl;
    }
    return 0;
}