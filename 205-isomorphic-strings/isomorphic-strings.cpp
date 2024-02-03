#include <vector>

class Solution {
public:
    string createGenericMapping(string str) {
        vector<char> cmap(256, 0);
        char start = 'a';
        string result;

        for (auto ch : str) {
            if (cmap[ch] == 0) {
                cmap[ch] = start;
                start++;
            }
            result.push_back(cmap[ch]);
        }

        return result;
    }

    bool isIsomorphic(string s, string t) {
        return createGenericMapping(s) == createGenericMapping(t);
    }
};
