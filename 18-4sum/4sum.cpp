class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        set<vector<int>>st;
        for(int i=0;i<n;i++){
            // while(i!=0&&nums[i]==nums[i-1])i++;
            for(int j=i+1;j<n;j++){
                //two pointer
                int k = j+1;
                int l = n-1;

                while(k<l){
                    long long sum = 1LL*(nums[i])+nums[j]+nums[k]+nums[l];

                    if(sum==target){
                        st.insert({nums[i],nums[j],nums[k],nums[l]});
                        k++;
                        l--;
                        // while(k<l&&nums[k]==nums[k-1])k++;
                        // while(k<l&&nums[l]==nums[l+1])l--;
                    }
                    else if(sum<target)k++;
                    else l--;
                }
            }
        }
        for(auto v:st)ans.push_back(v);
        return ans;
    }
};