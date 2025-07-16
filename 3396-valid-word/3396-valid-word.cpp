class Solution {
public:
    bool isValid(string word) {
        if(word.length()<3){
            return false;
        }
        bool isconsonant=false;
        bool isvowel=false;
        for(char cht:word){
        if(isalpha(cht)){
        char ch=tolower(cht);
            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
                isconsonant=true;

            }else{
                isvowel=true;
            }
        }else if(!isdigit(cht)){
return false;
        }
        }
        return isconsonant&&isvowel;
    }
};