#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a >> b;

        int step = 0;
        int i;
        for (i = 0; i < a.length(); i++)
        {
            if (a[i] == b[i])
                continue;
            int p = i;
            while (p < a.length() && (a[p] != b[p]))
            {
                a[p] = b[p];
                p = p + 2;
            }
            step++;
        }
        cout << step << endl;
    }
    return 0;
}