// https://www.codechef.com/CTLS2021/problems/ITER4

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
        string s1, s2;
        cin >> s1;
        cin >> s2;
        unordered_set<char> st1, st2;

        for (int i = 0; i < s1.length(); i++)
        {
            st1.insert(s1[i]);
        }

        for (int i = 0; i < s2.length(); i++)
        {
            st2.insert(s2[i]);
        }

        int ans = 0;

        for (auto x : st1)
        {
            if (st2.find(x) == st2.end())
                ans++;
        }
        for (auto y : st2)
        {
            if (st1.find(y) == st1.end())
                ans++;
        }

        cout << ans << endl;
    }
    return 0;
}