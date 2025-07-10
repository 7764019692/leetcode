class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int>map;
        map['I']=1;
        map['V']=5;
        map['X']=10;
        map['L']=50;
        map['C']=100;
        map['D']=500;
        map['M']=1000;
        vector<int>t;
        for(int i =0;i<s.length();i++){
           
                t.push_back(map[s[i]]);
            
        }
    int count=0;
    for(int i=0 ;i <t.size();i++){
        if(i+1<t.size()&&t[i]<t[i+1]){

        count-=t[i];
        }else{
            count+=t[i];
        }
    }
    return count;
    }
};