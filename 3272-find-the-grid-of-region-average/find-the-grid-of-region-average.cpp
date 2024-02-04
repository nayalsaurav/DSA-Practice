class Solution {
public:
    vector<vector<int>> resultGrid(vector<vector<int>>& image, int threshold) {
        int n = image.size();
        int m = image[0].size();

        vector<vector<int>> sum(n, vector<int>(m)), cnt(n, vector<int>(m));

        auto checkRegion = [&](int row, int col) {
            int total = 0;
            for (int i = row; i <= row + 2; i++) {
                for (int j = col; j <= col + 2; j++) {
                    if (i > row &&
                        abs(image[i][j] - image[i - 1][j]) > threshold)
                        return false;
                    if (j > col &&
                        abs(image[i][j] - image[i][j - 1]) > threshold)
                        return false;
                    total += image[i][j];
                }
            }
            for (int i = 0; i <= 2; i++) {
                for (int j = 0; j <= 2; j++) {
                    sum[row + i][col + j] += total / 9;
                    cnt[row + i][col + j] += 1;
                }
            }
            return true;
        };

        for (int i = 0; i + 2 < n; i++) {
            for (int j = 0; j + 2 < m; j++) {
                checkRegion(i, j);
            }
        }
        vector<vector<int>> result(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (cnt[i][j] > 0)
                    result[i][j] = sum[i][j] / cnt[i][j];
                else
                    result[i][j] = image[i][j];
            }
        }
        return result;
    }
};