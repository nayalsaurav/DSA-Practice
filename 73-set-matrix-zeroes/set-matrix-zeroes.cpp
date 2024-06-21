class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<pair<int,int>>loc;
        for(int i=0;i<n;i++){
            for(int j =0;j<m;j++){
                if(matrix[i][j]==0){
                    loc.push_back({i,j});
                }
            }
        }
        for(auto i:loc){
            int x = i.first;
            int y = i.second;
            int idx = 0;
                while(idx<n){
                matrix[idx++][y]=0;
                }
                int idy = 0;
                while(idy<m){
                matrix[x][idy++]=0;
                }
        }

    }
};