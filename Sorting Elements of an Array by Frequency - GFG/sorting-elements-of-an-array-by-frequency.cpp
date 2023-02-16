//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends

        bool compp(pair<int,int> p1,pair<int,int> p2)
        {
            if(p1.first==p2.first)
            {
                return p1.second<p2.second;
            }
            else
            {
                return p1.first>p2.first;
            }
        }
class Solution{
    public:

    vector<int> sortByFreq(int arr[],int n)
    {
        vector<pair<int,int>>vec;
        vector<int> ans;
        map<int,int> m;
        typedef pair<int, int> pi;

        for(int i=0;i<n;i++)
        {
            m[arr[i]]++;
        }
        for(auto i : m)
        {
            vec.push_back({i.second,i.first});
        }
        sort(vec.begin(),vec.end(),compp);
        for(auto it:vec)
        {
            ans.insert(ans.end(),it.first,it.second);
        }
        return ans;

    }
};

//{ Driver Code Starts.

int main() {
	
	
	int t;
	cin >> t;
	
	
	while(t--){
	    
	    
	    int n;
	    cin >> n;
	    
	    int a[n+1];
	    
	    for(int i = 0;i<n;i++){
	        cin >> a[i];
	    }
	    Solution obj;
	    vector<int> v;
	    v = obj.sortByFreq(a,n);
	    for(int i:v)
	        cout<<i<<" ";
	    cout << endl;
	}
	
	return 0;
}


// } Driver Code Ends