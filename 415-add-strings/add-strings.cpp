class Solution {
public:
    string addStrings(string num1, string num2) {

        string ans = "";
        int carry = 0;

        while (!num1.empty() && !num2.empty()) {
            int num = num2.back() - '0' + num1.back() - '0' + carry;
            carry = 0;

            if (num >= 10) {
                ans += to_string(num % 10);
                carry = num / 10;
            } else {
                ans += to_string(num);
            }

            num1.pop_back();
            num2.pop_back();
        }
        // galti iske niche wale part me hui thi
        while (!num1.empty()) {
            int num = num1.back() - '0' + carry;
            carry = 0;
            //forgot
            if (num >= 10) {
                ans += to_string(num % 10);
                carry = num / 10;
            } else {
                ans += to_string(num);
            }

            num1.pop_back();
        }

        while (!num2.empty()) {
            int num = num2.back() - '0' + carry;
            carry = 0;

            if (num >= 10) {
                ans += to_string(num % 10);
                carry = num / 10;
            } else {
                ans += to_string(num);
            }

            num2.pop_back();
        }

        if (carry != 0) {
            ans += to_string(carry);
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }
};
