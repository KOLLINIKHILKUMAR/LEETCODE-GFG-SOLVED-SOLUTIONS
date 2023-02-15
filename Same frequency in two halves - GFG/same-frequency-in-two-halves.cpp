//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
public:
    bool passed (string s) 
    {
        int f;
        if(s.size()%2==0) f=1;
        else f=0;
        int n=s.size()/2;
        unordered_map<char,int> m,mp;
        for(int i=0;i<s.size();i++)
        {
            if(i<n)
            {
                m[s[i]]++;
            }
            else if(f==0 && i==n) continue;
            else
            {
                mp[s[i]]++;
            }
        }
        for(auto i : m)
        {
            if(m[i.first]!=mp[i.first]) return false;
        }
        return true;
         
    }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        if (ob.passed (s))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
// } Driver Code Ends