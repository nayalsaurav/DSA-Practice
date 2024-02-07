class Solution {
public:
    int romanToInt(string s) {
         int roman[256] = {
            ['I'] = 1,
            ['V'] = 5,
            ['X'] = 10,
            ['L'] = 50,
            ['C'] = 100,
            ['D'] = 500,
            ['M'] = 1000
        };
        int num = 0;
        int prevValue = 0; // Keep track of the previous value to handle subtractive cases
        for (int i = s.length() - 1; i >= 0; i--) {
            int currentValue = roman[s[i]];
            if (currentValue < prevValue) {
                num -= currentValue; // Subtract if current value is less than previous value
            } else {
                num += currentValue; // Add if current value is greater than or equal to previous value
            }
            prevValue = currentValue; // Update previous value for the next iteration
        }
        return num;
    }
};
