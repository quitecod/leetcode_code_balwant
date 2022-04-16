

class Solution {
public:
    string truncateSentence(string s, int k) {
        string ans="";
        int flag=0;
        for(char c: s){
            if(c==' '){
                flag++;
            }
            if(flag==k){
                break;
            }
            ans+=c;
        }
        return ans;
        
    }
};