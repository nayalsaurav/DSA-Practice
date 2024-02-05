class Solution {
public:
    string expand(int i,int j,string &s){
        int size = 0;
        while(i>=0&&j<s.length()&&s[i]==s[j]){
            size = j-i+1;
            i--;
            j++;
        }
        string str = s.substr(i+1,size);
        return str;
    }
    string longestString(string &s1,string &s2){
        if(s1.length()>s2.length()){
            return s1;
        }
        else{
            return s2;
        }
    }
    string longestPalindrome(string s) {
        string ans = "";
        int n = s.length();
        for(int center=0;center<n;center++){
            string odd = expand(center,center,s);
            string even = expand(center,center+1,s);
            // cout<<odd<<" "<<even<<endl;
            string temp =longestString(even,odd);
            ans = longestString(ans,temp);
        }
        return ans;
    }
};