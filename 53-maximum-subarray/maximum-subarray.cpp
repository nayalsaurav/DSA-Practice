class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        if(n==1){
            return nums[0];
        }
        int sum = 0;
        int maxi = INT_MIN;
        int start =0;
        int end = 0;
        for(int i=0;i<n;i++){
            if(sum==0){
                start = i;
            }
            sum+=nums[i];
            if(sum>maxi){
                maxi = sum;
                end = i;
            }
            
            if(sum<0){
                sum=0;
            }
        }
        cout<<"start : "<<start<<" "<<"end : "<<end<<endl;
        return maxi;
    }
};