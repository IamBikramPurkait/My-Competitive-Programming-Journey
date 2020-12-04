#include <iostream>
using namespace std;
#define ll long long int
int main()
{
    // your code goes here
    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b;
        cin >> a >> b;
        ll e1 = a / 2;
        ll o1 = a - e1;
        ll e2 = b / 2;
        ll o2 = b - e2;
        cout << e1 * e2 + o1 * o2 << endl;
    }

    return 0;
}
