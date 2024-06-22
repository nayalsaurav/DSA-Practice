class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        vector<int>ans;
        for(auto [num,cnt]:mp){
            if(cnt>n/3){
                ans.push_back(num);
            }
        }

        return ans;

    }
};