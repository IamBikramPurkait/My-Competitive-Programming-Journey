/*Count Digit in Number
Ex - In 123 number digit is 3.
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    // Method 1
    // Iterative Method

    int count = 0;
    while (n != 0)
    {
        n /= 10;
        count += 1;
    }
    cout << count << endl;

    // Method 2
    // Convert string and print the length of the string

    string num = to_string(n);
    cout << num.size() << endl;

    // Method 3
    // Logarithm Method

    cout << floor(log10(n) + 1) << endl;

    return 0;
}