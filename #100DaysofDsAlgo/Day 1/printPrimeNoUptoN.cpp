// C++ program to print all primes smaller than or equal to n

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    bool flag = true;
    vector<int> v;
    cin >> n;

    for (int i = 2; i < n; i++)
    {
        if (n % i != 0)
        {
            
        }
    }
    if (flag)
        cout << "Prime" << endl;
    else
        cout << "Not Prime" << endl;
    return 0;
}