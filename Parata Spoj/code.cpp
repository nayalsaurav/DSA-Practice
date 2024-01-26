#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int calculateTime(int n) {
    return n * (n + 1) / 2;
}
//predicate function
bool isPossibleSolution(vector<int>& crank, int order, int sol) {
    int paratha = 0; //current parata cooked
    for (int i = 0; i < crank.size(); i++) {
        int timeTaken = 0;
        int rank = crank[i];
        int j = 1;
        //calculating no of parata can be cooked by each rank
        while (true) {
            if (timeTaken + (j * rank) <= sol) {
                paratha++;
                timeTaken += j * rank;
                j++;
            } else {
                break;
            }
        }
        if (paratha >= order) {
            return true;
        }
    }

    return false;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        vector<int> crank;
        int order, n;
        cin >> order >> n;
        for (int i = 0; i < n; i++) {
            int rank;
            cin >> rank;
            crank.push_back(rank);
        }
        //create search space
        int start = 0;
        int maxRank = *max_element(crank.begin(), crank.end());
        int end = calculateTime(order) * maxRank;
        int ans = -1;
        //apply binary search
        while (start <= end) {
            int mid = start + (end - start) / 2;
          //create predicate function
            if (isPossibleSolution(crank, order, mid)) {
                ans = mid;
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }

        cout << ans << endl;
    }

    return 0;
}
