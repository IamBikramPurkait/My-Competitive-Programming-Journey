/*  Question > Count digits in a factorial
Given an integer n (can be very large), find the number of digits that appear in its factorial, where factorial is defined as, factorial(n) = 1*2*3*4……..*n and factorial(0) = 1

Examples:

Input :  n = 1
Output : 1
1! = 1, hence number of digits is 1

Input :  5
Output : 3
5! = 120, i.e., 3 digits

Input : 10
Output : 7
10! = 3628800, i.e., 7 digits

Input : 50000000
Output : 363233781

Input : 1000000000
Output : 8565705523

However normal approach solution would not be able to handle cases where n >10^6
So, 
We can use Kamenetsky’s formula to find our answer !

It approximates the number of digits in a factorial by :
f(x) =    log10( ((n/e)^n) * sqrt(2*pi*n))

Thus, we can pretty easily use the property of logarithms to,
f(x) = n* log10(( n/ e)) + log10(2*pi*n)/2 

*/

// A optimised program to find the number of digits in a factorial
#include <bits/stdc++.h>
using namespace std;

// Returns the number of digits present
// in n! Since the result can be large
// long long is used as return type
long long findDigits(int n)
{
    // factorial of -ve number
    // doesn't exists
    if (n < 0)
        return 0;
    // base case
    if (n <= 1)
        return 1;

    // Use Kamenetsky formula to calculate
    // the number of digits
    double x = ((n * log10(n / M_E) + log10(2 * M_PI * n) / 2.0));

    return floor(x) + 1;
}

// Driver Code
int main()
{
    cout << findDigits(1) << endl;
    cout << findDigits(50000000) << endl;
    cout << findDigits(1000000000) << endl;
    cout << findDigits(120) << endl;
    return 0;
}