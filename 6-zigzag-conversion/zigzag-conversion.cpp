class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1 || s.size() <= numRows)
            return s; // If numRows is 1 or equal to the size of the string, no conversion needed
        
        vector<string> rows(numRows);
        int currentRow = 0;
        bool goingDown = false;

        for (char ch : s) {
            rows[currentRow] += ch; // Append the character to the current row

            if (currentRow == 0 || currentRow == numRows - 1)
                goingDown = !goingDown; // Change direction when reaching the top or bottom row

            currentRow += goingDown ? 1 : -1; // Move to the next or previous row
        }

        string result;
        for (const string& row : rows) {
            result += row; // Concatenate the rows to get the result
        }
        return result;
    }
};
