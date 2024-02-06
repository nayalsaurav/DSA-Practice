class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int count = 1;
        int index = 0;
        for (int i = 0; i < n; i++) {
            if (i + 1 == n || chars[i] != chars[i + 1]) {
                chars[index++] = chars[i];
                if (count > 1) {
                        // Convert count to string and append it
                       string countStr =to_string(count);
                        for (auto& ch : countStr) {
                        chars[index++] = ch;
                    }
                }
                count = 1;
            } else {
                count++;
            }
        }
        return index;
    }
};
