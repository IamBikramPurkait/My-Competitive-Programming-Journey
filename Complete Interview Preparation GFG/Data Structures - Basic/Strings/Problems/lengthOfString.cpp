// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

int lengthString(string str);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        string s;
        cin >> s;
        cout << lengthString(s) << endl;
    }

    return 0;
}

// } Driver Code Ends

//User function Template for C++

int lengthString(string str)
{
    //Your code here
    return str.length();
}