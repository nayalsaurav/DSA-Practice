class Solution {
public:
    bool check(vector<int>& arr,int mid){
        if(arr[mid]>arr[mid+1]){
            return 1;
        }
        else{
            return 0;
        }
    }
    int peakIndexInMountainArray(vector<int>& arr) {
        int n = arr.size();
        int lo = 0;
        int hi = n-1;
        int ans = -1;
        while(lo<=hi){
            int mid = lo+(hi-lo)/2;
            if(check(arr,mid)==1){
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