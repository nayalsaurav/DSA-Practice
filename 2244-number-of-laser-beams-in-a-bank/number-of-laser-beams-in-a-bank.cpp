class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int ans=0;
        int prev=1;
        vector<int>rowCount;
        for(auto str:bank){
            int count=0;  //we can also use count stl
            for(auto ch:str){
                if(ch=='1'){
                    count++;
                }
            }
            if(count!=0){
            rowCount.push_back(count);
            }
        }
        // for(auto i:rowCount){
        //     cout<<i<<endl;
        // }
        for(int i=1;i<rowCount.size();i++){
            ans += rowCount[i]*rowCount[i-1];
        }
        return ans;

    }
};

