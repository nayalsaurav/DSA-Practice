class Solution {
public:
    int minimumTimeToInitialState(string word, int k) {
        int n = word.length();

        for(int i=1;i<=n;i++){  // time required
            int d = i*k;
            if(d>=n) return i;
            bool ok=true;
            for(int j=d;j<n;j++){
                if(word[j]!=word[j-d]){
                    ok = false;
                    break;
                }
            }
            if(ok){
                return i;
            }
        }
        return 0;
        
    }
};