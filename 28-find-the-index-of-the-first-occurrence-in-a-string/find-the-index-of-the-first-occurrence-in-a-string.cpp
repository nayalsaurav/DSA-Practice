class Solution {
public:
    int strStr(string haystack, string needle) {
        int n= haystack.length();
        int m = needle.length();
        if(m>n){
            return  -1;
        }
        for (int i = 0; i <n;i++) {
            int j = 0;
            int k = i;
            int size = n-i+1;
            while (size>=m&&j<m&&k<n&&haystack[k] == needle[j]) {
                k++;
                j++;
            }
            if (j == m) {
                return i;
            }
        }
        return -1;
    }
};