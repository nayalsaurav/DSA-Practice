class Solution {
public:
    string convert(string s, int numRows) {
        
        if (numRows == 1 || s.size() <= numRows)
            return s;
        vector<string>row(numRows);
        bool goingDown = false;
        int currentRow=0;

        for(auto ch:s){
            row[currentRow].push_back(ch);
            if(currentRow==0||currentRow==(numRows-1)){
                goingDown =!goingDown;
            }
            currentRow +=goingDown?1:-1;
        }

        string result="";
        for(auto& i:row){
            result+=i;
        }
        return result; 
    }
};