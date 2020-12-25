//Sameer's Code
#include<bits/stdc++.h>
using namespace std;
#define print(a) for (int i = 0; i < n; i++) {cout << a[i] << " ";}
#define allsort(a) sort(a.begin(),a.end());
#define allsorta(a) sort(a,a+n);
#define all(a) a.begin(),a.end()
#define ll long long
#define endl "\n"
#define MOD 1000000007
#define pb push_back
const int N = 0;
/*
Test case area
*/
void solve()
{
	ll n;
	cin >> n;
	ll x = n;
	n |= n >> 1;
	n |= n >> 2;
	n |= n >> 4;
	n |= n >> 8;
	n |= n >> 16;
	cout << ((n ^ x)) << endl;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r" , stdin);
// 	freopen("output.txt", "w", stdout);
// #endif
	long long int t = 1;
	cin >> t;
	for (int tt = 0; tt < t; tt++)
	{
		solve();
	}
	return 0;
}