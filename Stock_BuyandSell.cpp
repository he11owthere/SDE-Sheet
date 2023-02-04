class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int x = prices[0], m = 0;
        for(int i = 0; i < prices.size(); i++)
        {
            m = max(m, prices[i]-x);
            x = min(x, prices[i]);
        }
        return m;
    }
};