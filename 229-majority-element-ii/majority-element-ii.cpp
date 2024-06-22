class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();

        int cnt1 = 0; // Counter for the first candidate
        int cnt2 = 0; // Counter for the second candidate

        int elem1 = INT_MIN; // First candidate element
        int elem2 = INT_MIN; // Second candidate element

        // First pass to find potential candidates
        for (int i = 0; i < n; i++) {
            if (cnt1 == 0 && nums[i] != elem2) {
                cnt1 = 1;
                elem1 = nums[i];
            } else if (cnt2 == 0 && nums[i] != elem1) {
                cnt2 = 1;
                elem2 = nums[i];
            } else if (nums[i] == elem1)
                cnt1++;
            else if (nums[i] == elem2)
                cnt2++;
            else {
                cnt1--;
                cnt2--;
            }
        }

        // Reset counters for verification
        cnt1 = 0;
        cnt2 = 0;

        // Second pass to count actual occurrences
        for (int i = 0; i < n; i++) {
            if (nums[i] == elem1)
                cnt1++;
            if (nums[i] == elem2)
                cnt2++;
        }

        vector<int> ans;
        int mini = int(n / 3) + 1;
        if (cnt1 >= mini)
            ans.push_back(elem1);
        if (cnt2 >= mini && elem1 != elem2) // Ensure elem1 and elem2 are distinct
            ans.push_back(elem2);

        return ans;
    }
};
