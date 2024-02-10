class Solution {
public:
    string removeDuplicates(string s, int k) {
        int n = s.length(); 
        vector<int> count(n, 0); // Vector to store counts of consecutive characters
        int i = 0; // current position in the modified string
        int j = 0; // iterate through the input string
        
        // Iterate through the input string
        while (j < n) {
            s[i] = s[j]; // Assign character at index j to position i in the string
            count[i] = 1; // Initialize count for the current character
            
            // If the previous character is the same as the current one
            if (i > 0 && s[i - 1] == s[i]) {
                count[i] += count[i - 1]; // Increment count based on previous count
            }
            
            // If the count reaches k, remove k duplicates by moving i back
            if (count[i] == k) {
                i -= k;
            }
            
            // Move to the next position in the string
            i++;
            j++;
        }
        
        // Return a substring of the modified string from index 0 to i
        return s.substr(0, i);
    }
};
