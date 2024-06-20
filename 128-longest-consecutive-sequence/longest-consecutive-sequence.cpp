class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st(nums.begin(), nums.end());
        int ans = 0;
        // auto it = ++prev;
        for (auto num : st) {
            if (st.find(num - 1) == st.end()) {
                int current = num;
                int streak = 1;
                while (st.find(current + 1) != st.end()) {
                    current += 1;
                    streak += 1;
                }
                ans = max(streak, ans);
            }
        }
        return ans;
    }
};