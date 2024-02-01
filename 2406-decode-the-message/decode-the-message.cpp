class Solution {
public:
    string decodeMessage(string key, string message) {
        
        unordered_map<char,char>cmap;
        char ch = 'a';
        for(auto i:key){
            if(cmap.find(i)==cmap.end()){
                if(i!=' '){
                cmap[i]=ch;
                ch++;
                }
                else{
                    cmap[i]=i;
                }
            }
        }
        cmap[' ']=' ';
        // for(auto i:cmap){
        //     cout<<i.first<<" "<<i.second<<endl;
        // }
        string ans="";
        for(auto i:message){
            ans.push_back(cmap[i]);
        }
        return ans;
    }
};