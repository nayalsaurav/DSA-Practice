class Solution {
public:
    bool check(string &str,int i,int j){
        while(i<j){
            if(str[i]!=str[j]){
                return false;
            }
            else{
                i++;
                j--;
            }
        }
        return true;
    }
    bool validPalindrome(string &s) {
        int i=0;
        int j = s.length()-1;
        while(i<j){
            if(s[i]==s[j]){
                i++;
                j--;
            }
            else{
                // case:
                // either s[i] is removed or s[j] at a time.
                bool ans1 = check(s,i,j-1);
                bool ans2 = check(s,i+1,j);
                return ans1||ans2;
            }
        }
        return true;
    }
};