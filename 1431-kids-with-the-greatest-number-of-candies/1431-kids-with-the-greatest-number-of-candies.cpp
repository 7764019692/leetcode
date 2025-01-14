class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int s=candies.size();
        vector<int>dd;
        for(int i =0;i<s;i++){
        dd.push_back(candies[i]);
        }
        sort(dd.begin(),dd.end());
        int g=dd[s-1];
        bool d=false;
        vector<bool>rs;
        for(int i=0;i<s;i++){
            if(candies[i]+extraCandies>=g){
            //    d=true;
             rs.push_back(true);
            }else{
                rs.push_back(false);
            }
           
         
        }
   return rs;
    }
};