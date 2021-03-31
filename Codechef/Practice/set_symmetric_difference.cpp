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
        cin >> s1 >> s2;
        set<char> a;
        set<char> b;
        vector<char> v;
        for (auto it : s1)
        {
            a.insert(it);
        }
        for (auto it : s2)
        {
            b.insert(it);
        }
        set<char>::iterator it, st;
        it = set_symmetric_difference(a.begin(), a.end(), b.begin(), b.end(), v.begin());

        for (st = v.begin(); st != it; ++st)
            cout << ' ' << *st;

        return 0;
    }