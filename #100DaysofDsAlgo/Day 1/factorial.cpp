// Program to Find the Factorial of a Number

#include <bits/stdc++.h>
using namespace std;

int factorial(int n)
{
    if (n <= 0)
        return 1;

    return n * factorial(n - 1);
}

int main()
{
    int n;
    cin >> n;

    // Iterative Method

    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    cout << fact << endl;

    // Recursion Method

    cout << factorial(n) << endl;
    return 0;
}