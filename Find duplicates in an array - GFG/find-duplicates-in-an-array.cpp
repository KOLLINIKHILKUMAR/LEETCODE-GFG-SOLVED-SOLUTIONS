//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
  public:
    vector<int> duplicates(int arr[], int n) 
    {
        vector<int> v;
            unordered_map<int,int> m;
            for(int i=0;i<n;i++)
            {
                m[arr[i]]++;
                 if(m[arr[i]]==2) v.emplace_back(arr[i]);
            }
        if(v.size()==0)
        {
            v.emplace_back(-1);
            return v;
        }
        sort(v.begin(),v.end());
        return v;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution obj;
        vector<int> ans = obj.duplicates(a, n);
        for (int i : ans) cout << i << ' ';
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends