#pragma GCC optimize("O3", "unroll-loops")
class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int ans=0;
        int prev=0;//store previously present  no. of devices
        for(auto& row: bank){
            int device=count(row.begin(), row.end(), '1');  // count the number of 1's
            if (device>0){
                ans+=device*prev;
                prev=device;
            }
        }
        return ans;
    }
};