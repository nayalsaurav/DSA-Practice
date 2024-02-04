class Solution {
public:
// T.C = O(n*n/k)
    int minimumTimeToInitialState(string word, int k) {
        int timeTaken = 0;
        int index = 0;
        string initial = word;

        while (index < word.size()) {
            index += k;
            timeTaken++;
            //The parameters of compare are (position1, length1, str, position2, length2)
            if (index <= word.size() && initial.compare(0, word.size() - index, word, index, word.size() - index) == 0) { //t.c = O(n/k)
                return timeTaken;
            }
        }

        return timeTaken;
    }
};
