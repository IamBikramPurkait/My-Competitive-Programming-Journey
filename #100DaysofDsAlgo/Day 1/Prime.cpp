// Check the Prime Number

// Using naiove Method

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    bool flag = true;
    cin >> n;

    if (n <= 1)
        flag = false;

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            flag = false;
            break;
        }
    }
    if (flag)
        cout << "Prime" << endl;
    else
        cout << "Not Prime" << endl;
    return 0;
}