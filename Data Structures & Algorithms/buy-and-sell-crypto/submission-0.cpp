class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans =0;
        int n = prices.size();
        int buyPrice  = INT_MAX;
        for (int i =0; i< n; i++){
                 buyPrice = min(prices[i], buyPrice);

                 ans =  max(ans, prices[i] - buyPrice);

             
        }

        return ans;
    }
};
