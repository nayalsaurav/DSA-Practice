class Solution {
public:
    int solve(vector<int>& nums,int start,int end){
        if(start>=end) return nums[start];
        int maxleftbordersum=INT_MIN,maxrightbordersum = INT_MIN; // Corrected initial values
        int mid = start+(end-start)/2;
        int maxleftsum = solve(nums,start,mid);
        int maxrightsum = solve(nums,mid+1,end);

        //max cross boader sum
        int leftbordersum=0;
        int rightbordersum = 0;
        for(int i=mid;i>=start;i--){
            leftbordersum +=nums[i];
            if(leftbordersum>maxleftbordersum) maxleftbordersum = leftbordersum;
            
        }
        for(int i=mid+1;i<=end;i++){
            rightbordersum +=nums[i];
            if(rightbordersum>maxrightbordersum) maxrightbordersum = rightbordersum; // Corrected comparison
        }
        int crossbordersum = maxleftbordersum+maxrightbordersum;
        return max(maxleftsum,max(maxrightsum,crossbordersum));



    }
    int maxSubArray(vector<int>& nums) {
        return solve(nums,0,nums.size()-1);
    }
};
