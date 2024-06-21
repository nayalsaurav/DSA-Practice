class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int count = 0;
        int sum = 0;

        // Hashmap to store the cumulative sum and its frequency
        unordered_map<int, int> mp;
        mp[0] = 1;  // To handle the case when the subarray starts from index 0

        for (int i = 0; i < n; i++) {
            sum += nums[i];
            
            // Check if there is a subarray sum that equals the target
            if (mp.find(sum - k) != mp.end()) {
                count += mp[sum - k];
            }
            
            // Increment the frequency of the cumulative sum
            mp[sum]++;
        }

        return count;
    }
};
