class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int minSize = INT_MAX;
        int minIndex =0;
    
        for(int i=0;i<strs.size();i++){
            if(strs[i].size()<minSize){
                minSize = strs[i].size();
                minIndex = i;
            }
        }
        string ans="";
        for(int i=0;i<minSize;i++){
            char currChar = strs[minIndex][i];
            for(auto str:strs){
                if(str[i]!=currChar){
                    return ans;
                }
            }
            ans.push_back(currChar);
        }
        return ans;
    }
};