class Solution {
public:
        int gcd(int e,int d){
        while(d!=0){
            int temp = d;
            d=e%d;
            e=temp;
            }
    return e;

        };
    string gcdOfStrings(string str1, string str2) {
        int e=str1.length();
        int d=str2.length();
        if(str1+str2!=str2+str1){
            return "";
        }
        int len=gcd(e,d);
     
        
return str1.substr(0,len);
    }
};