class Solution {
public:

    int singleNonDuplicate(vector<int>& nums) {
        int ans = -1;
        int start = 0;
        int end = nums.size()-1;
        int n = nums.size();
        while(start<=end){
            int mid = start+(end-start)/2;
            //odd
            if(mid&1){
                if(mid+1<n&&nums[mid]==nums[mid-1]){
                    start = mid+1;
                }
                else{
                    end = mid-1;
                }
            }
            else{
                if(mid+1<n&&nums[mid]==nums[mid+1]){
                    start = mid+2;
                }
                else if(mid-1>=0&&nums[mid]==nums[mid-1]){
                    end = mid-2;
                }
                else{
                    ans = mid;
                    break;
                }
            }
        }
        return nums[ans];
    }
};