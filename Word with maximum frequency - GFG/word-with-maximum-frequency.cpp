//{ Driver Code Starts
#include <iostream>
#include <map>
#include <algorithm>
#include <sstream>
using namespace std;



string maximumFrequency(string s);

int main()
{
    int t;cin>>t;
    cin.ignore();

    for(int i=0;i<t;i++)
    {

        string s;
        getline(cin,s);
        
        
        cout << maximumFrequency(s) << endl;

    }
    return 0;
}

// } Driver Code Ends
string maximumFrequency(string s)
{
    s=s+" ";
    string temp="",ss="";
    vector<string> ans;
    map<string,int> m;
    int maxi=0;
    
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==' ')
        {
            ans.emplace_back(temp);
            m[temp]++;
            temp="";
        }
        else
        {
            temp=temp+s[i];
        }
    }
    
    for(auto i : m) 
        maxi=max(maxi,i.second);

    for(auto i : ans)
    {
        if(maxi==m[i])
        {
            ss=i+" "+to_string(m[i]); 
            return ss;
        }
    }

}

