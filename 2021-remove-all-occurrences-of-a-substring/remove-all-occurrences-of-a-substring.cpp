class Solution {
public:
    string removeOccurrences(string s, string part) {
        if(s.find(part)==string::npos){
            return s;
        }
            //remove part
            return removeOccurrences(s.erase(s.find(part),part.length()),part);
    }
};