#include <bits/stdc++.h>
using namespace std;

/*
Naive Method
Time=O(N)
Space=O(N)
*/

bool palindromereversenaive(string s)
{
    string rev = s;

    reverse(rev.begin(), rev.end());

    return (rev == s);
}

/*
Efficient Method
Time=O(N)
Space=O(1)
*/

bool palindromereverse(string s)
{
    int start = 0, end = s.size() - 1;

    while (start <= end)
    {
        if (s[start] != s[end])
        {
            return false;
        }
        start++;
        end--;
    }
    return true;
}

// Driver Code
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    // printf("%s", palindromereversenaive(s) ? "Palindrome" : "Not Palindrome");
    printf("%s", palindromereverse(s) ? "Palindrome" : "Not Palindrome");

    return 0;
}