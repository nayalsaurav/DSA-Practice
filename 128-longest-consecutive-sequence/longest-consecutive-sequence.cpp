class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int>st;
        int n = nums.size();
        for(int i=0;i<n;i++){
            st.insert(nums[i]);
        }
        auto prev =st.begin(); 
        int count = 0;
        int ans = 0;
        // auto it = ++prev;
        for(auto it = st.begin();it!=st.end();it++){
            if(*it==1+*prev){
                count++;
            }
            else{
                ans = max(count,ans);
                count=1;
            }
                prev = it;
        }
        ans = max(ans,count);
        return ans;
    }
};