class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int lo = 0;
        int hi = n-1;

        while(lo<=hi){
            int mid = (lo+hi)/2;
            if(nums[mid]==target){
                return true;
            }
            else if(nums[mid]==nums[lo]&&nums[mid]==nums[hi]){
                lo++;
                hi--;
            }
            else if(nums[mid]>=nums[lo]){
                //left is sorted
                if(nums[lo]<=target&&target<nums[mid]){
                    hi = mid-1;
                }
                else{
                    lo = mid+1;
                }
            }
            else{
                //right is sorted
                if(nums[mid]<target&&target<=nums[hi]){
                    lo = mid+1;
                }
                else{
                    hi = mid-1;
                }
            }
        }
        return false;
    }
};