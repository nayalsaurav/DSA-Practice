class Solution {
public:
    bool isIsomorphic(string s, string t) {
        vector<char>smap(256,0);
        vector<char>tmap(256,0);

        for(int i=0;i<s.size();i++){
            if(smap[t[i]]==0){
                smap[t[i]]=s[i];
            }
            if(tmap[s[i]]==0){
                tmap[s[i]]=t[i];
            }

            if(smap[t[i]]!=s[i]||tmap[s[i]]!=t[i]){
                return false;
            }
        }
        return true;



    }
};