class Solution {
public:
    string reverseOnlyLetters(string s) {
        int i=0;
        int j = s.size()-1;

        while(i<=j){
            if((s[i]<'a'||s[i]>'z')&&(s[i]<'A'||s[i]>'Z')||(s[i]>='1'&&s[i]<='9')){
                i++;
            }
            else if((s[j]<'a'||s[j]>'z')&&(s[j]<'A'||s[j]>'Z')||(s[j]>='1'&&s[j]<='9')){
                j--;
            }
            else{
            swap(s[i],s[j]);
            i++;
            j--;
            }
        }
        return s;
    }
};