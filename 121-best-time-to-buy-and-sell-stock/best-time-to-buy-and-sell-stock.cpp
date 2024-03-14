class Solution {
public:
void solve(vector<int>& prices,int n,int i,int &profit,int &buy){
    if(i>=n){
        return;
    }
    if(prices[i]<buy){
        buy = prices[i];
    }
    if(prices[i]-buy>profit){
        profit = prices[i]-buy;
    }
    solve(prices,n,i+1,profit,buy);
}
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int buy = prices[0];
        int profit = 0;

        solve(prices,n,0,profit,buy);
        return profit;
        
    }
};