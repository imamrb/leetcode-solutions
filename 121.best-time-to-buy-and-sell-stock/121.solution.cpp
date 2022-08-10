class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int len = prices.size();
        int maxProfit = 0, maxPrice = -1; 
        
        for(int i=len-1; i>=0; i--){
            maxPrice = max(prices[i], maxPrice);
            maxProfit = max(maxProfit, maxPrice - prices[i]);
        }
        
        if(maxProfit < 0) maxProfit = 0;
        
        return maxProfit;
    }
};