#include <bits/stdc++.h>
using namespace std;

// Left Most Repeating Character

/*
Naive Method
Time=O(N*N)
Space=O(1)
*/

int leftMostNaive(string &str)
{
    for (int i = 0; i < str.length(); i++)
    {
        for (int j = i + 1; j < str.length(); j++)
        {
            if (str[i] == str[j])
                return i;
        }
    }
    return -1;
}

/*
Efficient Method - 1
Time=O(N)
Space=O(1)
*/

const int CHAR=256;
int leftMost1(string &str) 
{
    int count[CHAR]={0};
    for(int i=0;i<str.length();i++){
        count[str[i]]++;
    }
    for(int i=0;i<str.length();i++){
        if(count[str[i]]>1)return i;
    }
    return -1;
}


// Driver Code
int main()
{
    string str;
    cin>>str;
    cout << "Index of leftmost repeating character:" << endl;
    // cout << leftMostNaive(str) << endl;
    cout << leftMost1(str) << endl;

    return 0;
}