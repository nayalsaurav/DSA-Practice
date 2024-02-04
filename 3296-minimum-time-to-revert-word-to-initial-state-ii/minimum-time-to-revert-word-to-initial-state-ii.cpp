class Solution {
public:
    int minimumTimeToInitialState(std::string word, int k) {
        int timeTaken = 0;
        int index = 0;
        int wordSize = word.size();
        int initialSize = wordSize;
        string initial = word;

        while (index < wordSize) {
            index += k;
            timeTaken++;

            if (index <= wordSize &&equal(initial.begin(), initial.begin() + wordSize - index, initial.begin() + index)) {
                return timeTaken;
            }
        }

        return timeTaken;
    }
};
