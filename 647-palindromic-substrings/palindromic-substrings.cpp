class Solution {
public:
    int expand(string &s,int i,int j){
        int count =0;
        while(i>=0&&j<s.length()&&s[i]==s[j]){
            count++;
            i--;
            j++;
        }
        return count;
    }
    int countSubstrings(string s) {
        int n = s.length();
        int tcount =0;

        for(int center=0;center<n;center++){
            //odd
            int oddKaAns = expand(s,center,center);

            //even
            int evenKaAns = expand(s,center,center+1);

            tcount +=oddKaAns+evenKaAns;
        }
        return tcount;
    }
};