class Solution {
public:
    int minimumTimeToInitialState(string word, int k) {
        int timeTaken = 0;
        int index = 0;
        string initial = word;

        while (index < word.size()) {
            index += k;
            timeTaken++;

            if (index <= word.size() && initial.compare(0, word.size() - index, word, index, word.size() - index) == 0) {
                return timeTaken;
            }
        }

        return timeTaken;
    }
};
