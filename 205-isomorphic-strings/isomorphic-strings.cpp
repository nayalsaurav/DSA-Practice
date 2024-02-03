class Solution {
public:
    bool isIsomorphic(string s, string t) {
        vector<int>hash(256,0);
        vector<bool>isCharacterMapped(256,false);
        for(int i=0;i<s.size();i++){
            if(hash[s[i]]==0&&isCharacterMapped[t[i]]==false){
                hash[s[i]]=t[i];
                isCharacterMapped[t[i]]=true;
            }
        }

        for(int i=0;i<s.size();i++){
            if(hash[s[i]]!=t[i]){
                return false;
            }
        }
        return true;
    }
};