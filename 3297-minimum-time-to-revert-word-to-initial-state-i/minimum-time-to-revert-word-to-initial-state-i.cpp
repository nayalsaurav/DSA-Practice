class Solution {
public:
    int minimumTimeToInitialState(string word, int k) {
        int timeTaken =0;
        string initial = word;
        while(!word.empty()){
            word.erase(0,k);
            timeTaken++;
            if(initial.substr(0,word.size())==word){
                return timeTaken;
            }
        }
        return timeTaken;
    }
};