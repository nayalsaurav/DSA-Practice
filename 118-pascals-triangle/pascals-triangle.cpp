class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;
        if(numRows==1) ans.push_back({1});
        else{
        ans.push_back({1});
        ans.push_back({1,1});
        }
        for(int i = 2;i<numRows;i++){
        vector<int>row(i+1);
            row[0]=1;
            row[i]=1;
            for(int j=0;j<ans[i-1].size()-1;j++){
                row[j+1]=ans[i-1][j]+ans[i-1][j+1];
            }
            ans.push_back(row);
        }
        return ans;
    }
};