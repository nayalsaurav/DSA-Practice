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
        for (auto i : temp) {
            cout << i << " ";
        }
        cout << endl;
        int ans = INT_MAX;
        // circular check
        for (int i = 0; i <temp.size(); i++) {
            int currentDifference = temp[i]-temp[(i + 1) % temp.size()];
            int circularDifference = temp[(i + 1) % temp.size()]-temp[i] + 1440;
            int diff = min(abs(currentDifference), abs(circularDifference));
            // cout<<diff<<endl;
            ans = min(ans, diff);
        }
        return ans;
    }
};