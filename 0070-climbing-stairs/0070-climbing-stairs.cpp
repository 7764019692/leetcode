class Solution {
public:
int t[46];
int solve(int n ){
     
    if(n<0) return 0;
    if(n==0)return 1;
     if (t[n] != -1) return t[n];
  return t[n]= solve(n-1)+solve(n-2);

}
    int climbStairs(int n) {
    // vector<int>dp(n+1,-1);
    memset(t,-1,sizeof(t));
     return solve(n);
        
    }
};

