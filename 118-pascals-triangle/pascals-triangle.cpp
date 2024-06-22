class Solution {
public:
    void pascal(int n,vector<int>&row){
        int val = 1;
        row.push_back(val);
        for(int i=0;i<n;i++){
            val*=(n-i);
            val/=(i+1);
            row.push_back(val);
        }

    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;
        for(int i=0;i<numRows;i++){
            vector<int>row;
            pascal(i,row);
            ans.push_back(row);
        }
        return ans;

    }
};