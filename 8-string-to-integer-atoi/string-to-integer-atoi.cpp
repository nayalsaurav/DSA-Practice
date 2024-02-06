#include <iostream>
#include <string>
#include <climits>

class Solution {
public:
    int myAtoi(std::string s) {
        int i = 0;
        // Step 1: Read and ignore leading whitespace
        while (i < s.length() && s[i] == ' ') {
            i++;
        }

        // Step 2: Check for '+' or '-' to determine sign
        int sign = 1;
        if (i < s.length() && (s[i] == '-' || s[i] == '+')) {
            sign = (s[i++] == '-') ? -1 : 1;
        }

        // Step 3: Read characters until non-digit or end of input
        long long result = 0; // Use long long to handle potential overflow
        while (i < s.length() && isdigit(s[i])) {
            result = result * 10 + (s[i++] - '0');

            // Step 4: Check for integer overflow
            if (result * sign > INT_MAX) {
                return INT_MAX;
            } else if (result * sign < INT_MIN) {
                return INT_MIN;
            }
        }

        // Step 5: Apply sign and return the result
        return result * sign;
    }
};