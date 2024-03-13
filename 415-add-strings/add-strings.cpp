class Solution {
public:
    void solve(string &num1, string &num2,int &carry,int i,int j,string &ans){
        if(i<0&&j<0&&carry==0){
            return;
        }
        int sum = carry;
        if(i>=0){
            sum+=num1[i]-'0';
            i--;
        }
        if(j>=0){
            sum+=num2[j]-'0';
            j--;
        }
        ans+='0'+(sum%10);
        carry = sum/10;
        solve(num1,num2,carry,i,j,ans);
    }
    string addStrings(string num1, string num2) {
        string ans ="";
        int i = num1.size()-1;
        int j = num2.size()-1;
        int carry =0;
        solve(num1,num2,carry,i,j,ans);
        reverse(ans.begin(),ans.end());
        return ans;
    }
};