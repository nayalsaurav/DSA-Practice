class Solution {
public:
    //morse voting algo
    int majorityElement(vector<int>& nums) {
        int count =0;
        int candidate=nums[0];//let majority element be 1st element

        for(auto num:nums){
            if(count==0){ // count ==0 means there is some other element occuring more.
                candidate = num;
            }
            if(num==candidate){
                count++;
            }
            else{
                count--;
            }
        }
        return candidate;
    }
};