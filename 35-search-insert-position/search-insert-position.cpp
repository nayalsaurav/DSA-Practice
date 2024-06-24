class Solution {
public:
    int searchInsert(vector<int>& arr, int target) {
        int n = arr.size();
        int lo = 0;
        int hi = n-1;
        int ans=n; // caution
        while(lo<=hi){
            int mid = lo+(hi-lo)/2;
            if(arr[mid]>=target){
                ans = mid;
                hi = mid-1;
            }
            else{
                lo = mid+1;
            }
        }
        
        return ans;
    }
};