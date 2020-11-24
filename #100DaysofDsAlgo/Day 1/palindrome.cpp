// C Program to Check Whether a Number is Palindrome or Not

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, reversedN = 0, remainder, originalN;
    cin >> n;
    originalN = n;

    // reversed integer is stored in reversedN
    while (n != 0)
    {
        remainder = n % 10;
        reversedN = reversedN * 10 + remainder;
        n /= 10;
    }

    // palindrome if orignalN and reversedN are equal
    if (originalN == reversedN)
        cout << "Palindrome" << endl;
    else
        cout << "Not Palindrome" << endl;

    return 0;
}