class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int>freq(256,0);
        for(auto ch:s){
            freq[ch]++;
        }
        for(auto &ch:t){
            freq[ch]--;
        }

        for(auto &i:freq){
            if(i!=0){
                return false;
            }
        }
        return true;
    }
};