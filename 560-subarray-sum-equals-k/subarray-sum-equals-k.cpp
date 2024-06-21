class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int count = 0;
        // hashmap
        int sum = 0;

        map<int, int> mp;
        mp[0]=1;
        for (int i = 0; i < n; i++) {
            sum += nums[i];
            int rem = sum-k;
            if (mp.find(rem) != mp.end()) {
                count+=mp[rem];
            }
            mp[sum]++;
        }

        return count;
    }
};