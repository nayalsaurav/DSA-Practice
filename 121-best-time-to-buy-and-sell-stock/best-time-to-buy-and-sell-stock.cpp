class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int minValue = INT_MAX;
        int maxProfit = INT_MIN;
        for(int i=0;i<n;i++){
            minValue = min(minValue,prices[i]);//minValue at each index
            maxProfit = max((prices[i]-minValue),maxProfit);//maxProfit till that index
        }
        return maxProfit;
    }
};