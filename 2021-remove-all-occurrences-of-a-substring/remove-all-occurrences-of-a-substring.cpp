class Solution {
public:
    string removeOccurrences(string s, string part) {
        if(s.find(part)==string::npos){
            return s;
        }
        else{
            //remove part
            return removeOccurrences(s.erase(s.find(part),part.length()),part);
        }
    }
};