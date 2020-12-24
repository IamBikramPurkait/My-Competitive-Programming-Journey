#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while (t--)
  {
    int n, k, f, m = 0, p = 0, l = 0, i = 0, j = 0;
    cin >> n >> k;
    string s;
    cin >> s;
    p = k + 1;
    // i for iron && j for magnet
    if(n<=1){
      cout << m << endl;
    }
    else
    {
      while (i < n && j < n)
      {
        if (s[i] == 'M')
        {
          if (s[j] == 'I')
          {
            if (i < j)
            {
              for (int k = i; k < j; k++)
              {
                if (s[k] == ':')
                  l++;
              }
            }
            else if (j < i)
            {
              for (int k = j; k < i; k++)
              {
                if (s[k] == ':')
                  l++;
              }
            }

            f = p - abs(i - j) - l;
            l=0;
            if (f > 0)
            {
              m++;
              i++;
              j++;
            }
            else if (i > j)
              j++;
            else
              i++;
          }
          else if (s[j] == 'X')
          {
            i = j;
            i++;
            j++;
          }
          else
            j++;
        }
        else if (s[i] == 'X')
        {
          j = i;
          i++;
          j++;
        }
        else
          i++;
      }

      cout << m << endl;
    }
  }
}