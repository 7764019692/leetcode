class Solution {
    public:
    int t[1001];
    int solve(vector<int>& nums,int i,int &n){
    if(i>=n)return 0;
    if(t[i]!=-1)return t[i];
    int pick=nums[i]+solve(nums,i+2,n);
    int npick=solve(nums,i+1,n);
    return t[i]=max(pick,npick);
    }
    int rob(vector<int>& nums){
        int n =nums.size();
        memset(t,-1,sizeof(t));
        return solve(nums,0,n);
    }
    
    };
