class Solution {
public:
    string removeDuplicates(string s) {
        //initialize ans string
        string ans ="";
        int i=0;
        while(i<s.length()){
            //check ans ka rightmost element and given string ka element
            if(ans.length()>0&&ans[ans.length()-1]==s[i]){
                //ans se pop kardo
                ans.pop_back();
            }
            else{
                ans.push_back(s[i]);
            }
            i++;
        }
        return ans;
    }
};