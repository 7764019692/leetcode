class Solution {
public:
    int maximumLength(vector<int>& nums) {
        int n =nums.size();
        int odd=0,even=0,par=1;
        for(int &num:nums){
            if(num %2==0){
                even++;
            }else{
                odd++;
            }
        }
        int parr=nums[0]%2;
        for(int i =1;i<n;i++){
            int curr=nums[i]%2;
            if(curr!=parr){
            par++;
            parr=curr;}
        }

        return max({even,odd,par});
        
    }
};