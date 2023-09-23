class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int total_profit = 0;
        int curr_min = prices[0];
        for (int i = 1; i < prices.size(); i++) {
            if (prices[i] < prices[i-1]) {
                total_profit += (prices[i-1] - curr_min);
                curr_min = prices[i];
            }
        }
        if (curr_min < prices.back())
            total_profit += (prices.back() - curr_min);
        return total_profit;
    }
};