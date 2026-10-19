class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int lowest = prices[0];
        int biggest = prices[0];
        int profit = 0;
        for (int i = 0; i < prices.size(); i++){
            if (lowest >= prices[i]){ 
                lowest = prices[i];
                biggest = prices[i];
            }

            if (biggest <= prices[i]) biggest = prices[i];
            if (biggest - lowest > profit) profit = biggest - lowest;
        }
        return profit;
    }
};