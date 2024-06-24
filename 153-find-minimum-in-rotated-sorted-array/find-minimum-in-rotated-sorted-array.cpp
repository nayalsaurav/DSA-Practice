class Solution {
public:
int check(vector<int>& arr,int mid){

    if(arr[mid]<arr[0]){
        return 1;
    }
    else{
        return 0;
    }
}
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int lo = 0;
        int hi = n-1;
        int idx = 0;
        while(lo<=hi){
            int mid = lo+(hi-lo)/2;
            if(check(nums,mid)==1){
                idx = mid;
                hi = mid-1;
            }
            else{
                lo = mid+1;
            }
        }
        return nums[idx];
    }
};