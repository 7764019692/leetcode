class Solution {
public:
int t[1001];
int solve(vector<int>& nums,int i,int n){
if(i>n)return 0;
if(t[i]!=-1)return t[i];
int pick=nums[i]+solve(nums,i+2,n);
int npick=solve(nums,i+1,n);
return t[i]=max(pick,npick);
}
    int rob(vector<int>& nums) {
        
        int n =nums.size();
        if(n==1)return nums[0];
        if(n==2)return max(nums[1],nums[0]);
        memset(t,-1,sizeof(t));
        int zero=solve(nums,0,n-2);
        memset(t,-1,sizeof(t));
        int one=solve(nums,1,n-1);
        return max(zero,one);
    }
};