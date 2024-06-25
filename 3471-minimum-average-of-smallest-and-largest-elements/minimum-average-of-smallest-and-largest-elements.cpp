class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int lo =0;
        int hi = nums.size()-1;
        double avg =INT_MAX;
        while(lo<hi){
            avg=min(((nums[lo]+nums[hi])/2.0),avg);
            lo++;
            hi--;
        }
        return avg;
    }
};