class Solution {
public:
    int majorityElement(vector<int>& arr) {
        int ans = 0;
        int count =0;
        int elem = arr[0];
        int n = arr.size();
        for(int i=0;i<n;i++){
            if(arr[i]==elem) count++;
            else if(arr[i]!=elem) count--;
            if(count==0){
                elem = arr[i];
                count = 1;
            }
        }
        return elem;
    }
};