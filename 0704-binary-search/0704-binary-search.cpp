class Solution {
public:
    int binarysearch(vector<int>& nums, int target,int start,int end){
        int mid = start+(end-start)/2;
        while(start<=end){
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]<target){
                start = mid+1;
            }
            else{
                end = mid-1;
            }
            mid = start+(end-start)/2;
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        if(nums[0]==target){
            return 0;
        }
        int index =1;
        while(index<n&&nums[index]<=target){
                index = 2*index;
        }
        int end = min(n-1,index);
        int start = end/2;
        int ans = binarysearch(nums,target,start,end);
        return ans;
    }
};