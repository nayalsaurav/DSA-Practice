class Solution {
public:
    void createGenericMapping(string &str){
        vector<char>cmap(256,0);
        char start ='a';
        for(auto &ch:str){
            if(cmap[ch]==0){
                cmap[ch]=start;
                start++;
            }
            ch = cmap[ch];
        }
    }
    bool isIsomorphic(string s, string t) {
        createGenericMapping(s);
        createGenericMapping(t);

        if(s==t){
            return true;
        }
        else{
            return false;
        }
        
    }
};