class Solution {
public:
    char kthCharacter(int k) {
        int shift=__builtin_popcount(k-1);
        return 'a'+shift;
      /*  string word="a";
        while(word.length()>0){
            string neww="";
            for(int i =0 ;i <word.length();i++){
                char t;
                if(word[i]=='z')t='a';
                else
                t=word[i]+1;
                neww+=t;
            }
            word+=neww;
        }
        return word[k-1];*/
        
    }
};
