class Solution {
public:
    string removeDuplicates(string s, int k) {
        vector<pair<char, int>> temp;
        // Iterate through the input string
        for (auto ch : s) {
            // If the vector is empty or the current character is different from the last one
            if (temp.empty() || temp.back().first != ch) {
                temp.push_back({ch, 1});
            } else {
                // If the current character is the same as the last one
                temp.back().second++;
                // If the count reaches k, remove the last element from the vector
                if (temp.back().second == k) {
                    temp.pop_back();
                }
            }
        }
        
        // Construct the result string based on the pairs in the vector
        string result = "";
        for (auto& p : temp) {
            result += string(p.second, p.first);
        }
        return result;
    }
};