class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        vector<int> temp;
        for (auto i : timePoints) {
            int hh = stoi(i.substr(0, 2)) * 60;
            int mm = stoi(i.substr(3, 2));
            temp.push_back(hh + mm);
        }
        sort(temp.begin(), temp.end());
        int ans = INT_MAX;
        for (int i = 0; i <temp.size()-1; i++) {
            int currentDifference = abs(temp[i]-temp[(i + 1)]);
            ans = min(ans, currentDifference);
        }
        // circular check
        int circularDifference = abs(temp[temp.size()-1]-(temp[0] + 1440));
        ans = min(ans,circularDifference);
        return ans;
    }
};