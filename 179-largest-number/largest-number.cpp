class Solution {
public:
    static bool compare(string &a,string&b){
        return a+b>b+a;  //merging both string and seeing which combination is greater
    }
    string largestNumber(vector<int>& nums) {
        vector<string>ans;
        //converting int vector int string vector
        for(int i=0;i<nums.size();i++){
            ans.push_back(std::to_string(nums[i]));
        }
        // using custom sort to sort string vector
        sort(ans.begin(),ans.end(),compare);
        if(ans[0]=="0") return "0";// special case 
        // storing the result
        string result="";
        for(auto& s:ans){
            result+=s;
        }
        return result;
    }
};