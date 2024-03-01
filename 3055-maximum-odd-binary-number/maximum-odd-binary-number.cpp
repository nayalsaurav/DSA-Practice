class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int one = 0;
        int zero = 0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='1'){
                one++;
            }
            else{
                zero++;
            }
        }
        string ans ="";
        while(one>1){
            ans+='1';
            one--;
        }
        while(zero--){
            ans+='0';
        }
        ans+='1';
        return ans;

    }
};