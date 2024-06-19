class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        map<int, int> mp;
        vector<int> ans;
        int n = arr.size();
        
        for(int i=0;i<n;i++){
            int rem = target-arr[i];
            if(mp.find(rem)!=mp.end()){
                ans.push_back(i);
                ans.push_back(mp[rem]);
                return ans;
            }
               mp[arr[i]]=i;
        }
        return ans;
       
    }
};
