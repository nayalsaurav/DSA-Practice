class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int minSize = strs[0].size();
        int minIndex = 0;
        for(int i=0;i<strs.size();i++){
            if(strs[i].size()<minSize){
                minSize=strs[i].size();
                minIndex = i;
            }
        }
        string ans="";
        for (int i = 0; i < minSize; i++) {
            char currentChar = strs[minIndex][i];
            for (auto str : strs) {
                if (str[i] != currentChar) {
                    return ans;
                }
            }
            ans.push_back(currentChar);
        }
        return ans;
    }
};