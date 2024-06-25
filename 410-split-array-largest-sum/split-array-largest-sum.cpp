class Solution {
public:
    int check(vector<int>& nums, int k, int mid,int n) {
        int lastSum = 0;
        int subArrayFormed = 0;
        for (int i = 0; i < n; i++) {
            if (lastSum >= nums[i]) {
                lastSum -= nums[i];
            } else {
                subArrayFormed++;
                if (subArrayFormed > k) {
                    return 0;
                }
                lastSum = mid;
                if (lastSum >= nums[i]) {
                    lastSum -= nums[i];
                }
                else{
                    return 0;
                }
            }
        }
        return 1;
    }
    int splitArray(vector<int>& nums, int k) {
        int n = nums.size();
        long long lo = 0;
        long long hi = accumulate(nums.begin(), nums.end(), 0);
        long long ans = 0;
        while (lo <= hi) {
            long long mid = lo + (hi - lo) / 2;
            if (check(nums, k, mid,n) == 1) {
                ans = mid;
                hi = mid - 1;
            } else {
                lo = mid + 1;
            }
        }
        return ans;
    }
};