class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, vector<int>> mp;  // Use int for simplicity
        vector<int> ans;
        int n = nums.size();
        
        // Fill the map with indices of each number
        for(int i = 0; i < n; i++) {
            mp[nums[i]].push_back(i);
        }

        // Traverse the array to find the required pair
        for(int i = 0; i < n; i++) {
            int rem = target - nums[i];
            if(rem == nums[i] && mp[rem].size() > 1) {
                ans.push_back(mp[rem][0]);
                ans.push_back(mp[rem][1]);
                return ans;
            } else if(mp.find(rem) != mp.end() && mp[rem][0] != i) {
                ans.push_back(i);
                ans.push_back(mp[rem][0]);
                return ans;
            }
        }
        
        return ans;
    }
};
