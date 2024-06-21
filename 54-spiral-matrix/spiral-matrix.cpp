class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        int rowStart=0;
        int rowEnd = n-1;
        int colStart = 0;
        int colEnd = m-1;

        int totalElement = n*m;
        int count = 0;

        vector<int>ans;
        while(count<totalElement){
            for(int i=colStart;i<=colEnd;i++){
                if(count==totalElement) break;
                ans.push_back(matrix[rowStart][i]);
                count++;

            }
            rowStart++;
            for(int i=rowStart;i<=rowEnd;i++){
                if(count==totalElement) break;
                ans.push_back(matrix[i][colEnd]);
                count++;
            }
            colEnd--;
            for(int i=colEnd;i>=colStart;i--){
                if(count==totalElement) break;
                ans.push_back(matrix[rowEnd][i]);
                count++;
            }
            rowEnd--;
            for(int i=rowEnd;i>=rowStart;i--){
                if(count==totalElement) break;
                ans.push_back(matrix[i][colStart]);
                count++;
            }
            colStart++;
        }
        return ans;
    }
};