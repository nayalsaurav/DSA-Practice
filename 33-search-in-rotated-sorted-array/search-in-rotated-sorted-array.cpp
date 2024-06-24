class Solution {
public:
    int binarySearch(vector<int>&arr,int target,int lo,int hi){
        while(lo<=hi){
            int mid = lo+(hi-lo)/2;
            if(arr[mid]==target){
                return mid;
            }
            else if(arr[mid]<target){
                lo=mid+1;
            }
            else{
                hi=mid-1;
            }
        }
        return -1;
    }
int check(vector<int>& arr,int mid){

    if(arr[mid]<arr[0]){
        return 1;
    }
    else{
        return 0;
    }
}
    int search(vector<int>& nums, int target) {
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
        
        int i1 = binarySearch(nums,target,0,idx-1);
        int i2 = binarySearch(nums,target,idx,n-1);

        if(i1==-1&&i2==-1){
            return -1;
        }
        else if(i1==-1){
            return i2;
        }
        else{
            return i1;
        }



    }
};