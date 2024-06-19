class Solution {
public:
    int maxSubArray(vector<int>& arr) {
        int n = arr.size();
        int ans = INT_MIN;
        //kandae
        int sum = 0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            ans = max(ans,sum);

            if(sum<=0){
                sum=0;
            }
        }
        return ans;
    }
};