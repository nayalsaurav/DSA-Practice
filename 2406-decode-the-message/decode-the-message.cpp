class Solution {
public:
    string decodeMessage(string key, string message) {
        //creating own mapping
        vector<char>cmap(256,0);
        char start ='a';
        for(auto ch:key){
            if(ch!=' '&&cmap[ch]==0){
                cmap[ch]=start;
                start++;
            }
        }
        string ans="";
        for(auto ch :message){
            if(ch !=' '){
                ans.push_back(cmap[ch]);
            }
            else{
                ans.push_back(' ');
            }
        }
        return ans;
    }
};