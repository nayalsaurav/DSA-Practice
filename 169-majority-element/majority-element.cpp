
class Solution {
public:
    //morse voting algo
    //T.C = O(n)
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

// using sort 
// T.C = O(nlogn)
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // sort and mid method
        sort(nums.begin(),nums.end());
        int s = 0;
        int e = nums.size()-1;
        int mid = s + (e-s)/2;

        return nums[mid];
    }
};
