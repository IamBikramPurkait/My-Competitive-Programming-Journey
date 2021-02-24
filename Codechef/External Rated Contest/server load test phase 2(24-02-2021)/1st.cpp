#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while (t--)
    {
        int m, h, res;
        cin >> m >> h;
        res = m / (h * h);
        if (res <= 18)
            cout << 1 << endl;
        else if (res == 19 or res == 20 or res == 21 or res == 22 or res == 23 or res == 24)
            cout << 2 << endl;
        else if (res == 25 or res == 26 or res == 27 or res == 28 or res == 29)
            cout << 3 << endl;
        else
            cout << 4 << endl;
    }
    return 0;
}
