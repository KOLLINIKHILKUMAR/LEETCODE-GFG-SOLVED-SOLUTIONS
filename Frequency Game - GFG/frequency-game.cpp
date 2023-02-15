//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

int LargButMinFreq(int arr[], int n) 
{
    map<int,int> m;
    long long int maxnum=INT_MIN;
    long long int minfreq=INT_MAX;
    for(int i=0;i<n;i++) m[arr[i]]++;
    for(auto i : m)
    {
        if(minfreq>=i.second)
        {
            if(maxnum<i.first)
            {
                minfreq=i.second;
                maxnum=i.first;
            }
        }
    }
    return maxnum;
    
}

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    // Iterating over testcases
    while (t--) {
        int n;
        cin >> n;

        int arr[n];

        for (int i = 0; i < n; i++) cin >> arr[i];

        cout << LargButMinFreq(arr, n) << endl;
    }
}
// } Driver Code Ends