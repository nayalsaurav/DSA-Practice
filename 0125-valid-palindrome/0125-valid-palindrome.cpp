class Solution {
public:
    bool isPalindrome(string s) {

        string temp="";
        for(char i:s){
            if(i>='A'&&i<='Z'||i>='a'&&i<='z'){
                temp.push_back(tolower(i));
            }
            if(i>='0'&&i<='9'){
                temp.push_back(i);
            }
        }
        cout<<temp<<endl;
        int i=0;
        int j = temp.length()-1;
        while(i<j){
            if(temp[i]!=temp[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};