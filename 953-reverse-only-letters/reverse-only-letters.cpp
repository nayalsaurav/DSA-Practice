class Solution {
public:
    string reverseOnlyLetters(string s) {
        int i = 0;
        int j = s.size() - 1;
        // is alpha tells if a character is an alphabet or not
        while (i < j) {
            if (!isalpha(s[i])) {
                i++;
            } else if (!isalpha(s[j])) {
                j--;
            } else {
                swap(s[i++], s[j--]);
            }
        }

        return s;
    }
};