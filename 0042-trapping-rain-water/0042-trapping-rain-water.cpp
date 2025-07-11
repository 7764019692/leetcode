class Solution {
public:
vector<int>leftmax(vector<int>& height,int &n){
    vector<int>left(n);
    left[0]=height[0];
    for(int i =1;i<n;i++){
        left[i]=max(left[i-1],height[i]);

    }
    return left;

}
vector<int> rightmax(vector<int>& height,int &n){
    vector<int>right(n);
    right[n-1]=height[n-1];
    for(int i =n-2;i>=0;i--){
        right[i]=max(right[i+1],height[i]);

    }
    return right;

}
    int trap(vector<int>& height) {
        int n =height.size();
        vector<int>left=leftmax(height,n);
        vector<int>right=rightmax(height,n);
        int sum=0;
        for(int i =0;i<n;i++){
            int h=min(left[i],right[i])-height[i];
            sum+=h;

        }
        return sum;
    }
};