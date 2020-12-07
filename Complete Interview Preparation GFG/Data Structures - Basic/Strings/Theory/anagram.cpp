#include <bits/stdc++.h>
using namespace std;

/*
Naive Method
Time=O(NLogN)
Space=O(1)
*/

bool anagramnaive(string &s1, string &s2)
{
    if (s1.size() != s2.size())
        return false;
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    return (s1 == s2);
}

/*
Efficient Method
Time=O(N+CHAR)
Space=O(CHAR)
*/

const int CHAR=256;
bool anagram(string &s1, string &s2) 
{ 
    int n1 = s1.length(); 
    int n2 = s2.length(); 
    if (n1 != n2) 
        return false; 
    
    int count[CHAR]={0};
    for(int i=0;i<s1.length();i++){
        count[s1[i]]++;
        count[s2[i]]--;
    }
    
    for(int i=0;i<CHAR;i++){
        if(count[i]!=0)return false;
    }
    return true;
}

// Driver Code
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s1, s2;
    cin >> s1 >> s2;

    // printf("%s", anagramnaive(s1,s2) ? "Anagram" : "Not Anagram");
    printf("%s", anagram(s1, s2) ? "Anagram" : "Not Anagram");

    return 0;
}