class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        
        vector<string>temp;
        vector<string>ans;
        for(auto str:words){
            vector<char>mapping(256,0);
            char start ='a';
            string st="";
            for(auto ch:str){
                if(mapping[ch]==0){
                    mapping[ch]=start;
                    start++;
                }
                st.push_back(mapping[ch]);
            }
            temp.push_back(st);
        }
        vector<char>mapping(256,0);
        string newpattern="";
        char ch='a';
        for(auto i:pattern){
            if(mapping[i]==0){
                mapping[i]=ch;
                ch++;
            }
            newpattern.push_back(mapping[i]);
        }

        for(int i=0;i<temp.size();i++){
            if(temp[i]==newpattern){
                ans.push_back(words[i]);
            }
        }
        return ans;
    }
};