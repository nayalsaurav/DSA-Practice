class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int count = 1;
        string s = "";
        for (int i = 0; i < n; i++) {
            if (i + 1 == n || chars[i] != chars[i + 1]) {
                s.push_back(chars[i]);
                if (count > 1) {
                    s += to_string(count); // Convert count to string and append it
                }
                count = 1;
            } else {
                count++;
            }
        }
        for (int i = 0; i < s.length(); i++) {
            chars[i] = s[i];
        }
        return s.length();
    }
};
