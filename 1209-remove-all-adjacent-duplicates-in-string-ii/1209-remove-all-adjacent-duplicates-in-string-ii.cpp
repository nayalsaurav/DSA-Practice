class Solution {
public:
    string removeDuplicates(string s, int k) {
        vector<pair<char,int>> v;
        v.push_back({s[0],1});
        for(int i=1;i<s.length();i++){
            if(v.size()==0){
                v.push_back({s[i],1});
            }
            else if(v.back().first==s[i]){
                v.back().second++;
            }
            else{
                v.push_back({s[i],1});
            }
            if(v.back().second==k){
                v.pop_back();
            }
        }
        string temp="",res="";

        for(int i=0;i<v.size();i++){
            temp=string(v[i].second,v[i].first);
            res+=temp;
        }
        return res;
    }
};