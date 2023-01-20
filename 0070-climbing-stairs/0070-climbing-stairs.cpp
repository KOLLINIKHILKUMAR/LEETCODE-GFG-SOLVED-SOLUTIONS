class Solution {
public:
  int climbStairs(int n) {
      
      if( n==1 or n==0) return 1;
      int prev=1;
      int prev2=1;
      
      int i,curr;
      for( i=2;i<n+1;i++){
         curr=prev+prev2;
          prev2=prev;
          prev=curr;
          
      }
      return prev;
  }
};
