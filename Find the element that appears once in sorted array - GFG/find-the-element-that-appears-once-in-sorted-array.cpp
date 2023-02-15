//{ Driver Code Starts
// Driver code

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
  public:
    int findOnce(int arr[], int n)
    {
        int ans = -1;
        for (int i = 0; i < n; i += 2) 
        {
            if (arr[i] != arr[i + 1]) 
            {
                ans = arr[i];
                break;
            }
        }
        if (arr[n - 2] != arr[n - 1])
            ans = arr[n-1];
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int A[n];
        for(int i = 0;i < n;i++)
        {
            cin>>A[i];
        }
        
        Solution ob;
        
        int res = ob.findOnce(A,n);
        cout << res << endl;
    }
    
    return 0;
}
// } Driver Code Ends