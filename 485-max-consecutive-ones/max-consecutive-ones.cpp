class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans = 0;

        int n = nums.size();
        for(int i=0;i<n;i++){
            int cnt = 0;
            while(i<nums.size()&&nums[i]==1){
                cnt++;
                i++;
            }
            ans = max(cnt,ans);
        }
        return ans;
    }
};