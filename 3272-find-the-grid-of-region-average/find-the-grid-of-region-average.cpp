#include <vector>

class Solution {
public:
    bool checkRegion(int row, int col, vector<vector<int>>& image, int threshold,
                     vector<vector<int>>& sum, vector<vector<int>>& cnt) {
        int total = 0;
        for (int i = row; i <= row + 2; i++) {
            for (int j = col; j <= col + 2; j++) {
                if (i > row && abs(image[i][j] - image[i - 1][j]) > threshold)
                    return false;
                if (j > col && abs(image[i][j] - image[i][j - 1]) > threshold)
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
    }

    vector<vector<int>> resultGrid(vector<vector<int>>& image, int threshold) {
        int n = image.size();
        int m = image[0].size();

        vector<vector<int>> sum(n, vector<int>(m)), cnt(n, vector<int>(m));

        for (int i = 0; i + 2 < n; i++) {
            for (int j = 0; j + 2 < m; j++) {
                checkRegion(i, j, image, threshold, sum, cnt);
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

/*
Initialization: Create two matrices (sum and cnt) to keep track of the sum and count of pixel intensities in each 3x3 region.

Region Checking: Define a function (checkRegion) that, given a starting position (row, column), checks whether the pixels in the 3x3 region centered at that position meet certain conditions based on the threshold. If the conditions are met, accumulate the total intensity in the region and update the sum and cnt matrices.

Processing Regions: Iterate through each possible 3x3 region in the input image. For each region, call the checkRegion function to determine if it's a valid region.

Calculate Averages: After processing all regions, calculate the average intensity for each pixel based on the accumulated sum and count in the sum and cnt matrices.

Create Result Matrix: Generate the final result matrix where each pixel's intensity is set to the calculated average. If a pixel doesn't belong to any region, keep its original intensity.
*/