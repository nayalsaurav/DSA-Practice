class Solution {
public:
    string removeDuplicates(string s) {
        //initialize temp string
        string temp ="";
        //initial
        temp.push_back(s[0]);
        int i = 1;
        int j =-1;
        for(int i=1;i<s.length();i++){
            //check the rightmost element in temp
            if(j+1<s.length()&&s[i]==temp[j+1]){
                temp.pop_back();
                j--;
            }
            else{
                temp.push_back(s[i]);
                j++;
            }
        }
        return temp;
    }
};