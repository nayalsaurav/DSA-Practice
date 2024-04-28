class Solution {
public:
    bool ispossible(vector<int>& num1, vector<int>& num2){
        int i=0;
        int j=0;
        int k = 2;
        while(i<num1.size()&&j<num2.size()){
            if(num1[i]==num2[j]){
                i++;
                j++;
            }
            else{
                i++;
                k--;
                if(k<0){ return false;}
            }
        }
        return j==num2.size()&&(i-j)<=2;
    }
    int minimumAddedInteger(vector<int>& num1, vector<int>& num2) {
       
        sort(num1.begin(),num1.end());
        sort(num2.begin(),num2.end());
        map<int,int>mp;
        for(int i=0;i<num1.size();i++){
            for(int j=0;j<num2.size();j++){
                int x = num2[j]-num1[i];
            mp[x]++;
            }
            
        }
        int ans = INT_MAX;
        for(auto &[diff,count]:mp){
            vector<int>newarray(num1.size());
            for(int i=0;i<num1.size();i++){
                newarray[i] = num1[i] + diff;
            }
            sort(newarray.begin(),newarray.end());
            if(ispossible(newarray,num2)){
    ans = min(ans,diff);
}
        }
        return ans;
    }
};