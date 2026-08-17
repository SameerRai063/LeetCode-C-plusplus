class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int maxprofit = 0;
        int minprice = prices[0];
        for (int i = 1;i<prices.size();i++){
            int profit = prices[i] - minprice;
            maxprofit = profit > maxprofit ? profit : maxprofit;
            minprice = minprice < prices[i] ? minprice : prices[i];
        }
 return maxprofit;   }
};