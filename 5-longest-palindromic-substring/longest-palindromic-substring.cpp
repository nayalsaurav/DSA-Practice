class Solution {
public:
    string expand(int i, int j, string& s) {
        int size = 0;
        while (i >= 0 && j < s.length() && s[i] == s[j]) {
            size = j - i + 1;
            i--;
            j++;
        }
        return s.substr(i + 1, size);
    }
    string longestString(const string& s1, const string& s2) {
        return s1.length() > s2.length() ? s1 : s2;
    }

    string longestPalindrome(string s) {
        string ans = "";
        int n = s.length();
        for (int center = 0; center < n; center++) {
            string odd = expand(center, center, s);
            string even = expand(center, center + 1, s);
            string temp = longestString(even, odd);
            ans = longestString(ans, temp);
            if ((n - center) * 2 + 1 <= ans.length() || (n - center) * 2 <= ans.length()) {
            break;
        }
        }
        return ans;
    }
};