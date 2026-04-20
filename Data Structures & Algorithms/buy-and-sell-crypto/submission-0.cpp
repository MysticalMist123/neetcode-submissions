class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int s = 0, maxP = 0;
        for(int e=0;e<n;e++){
            if(prices[e]-prices[s]>maxP) maxP = prices[e] - prices[s];
            if(prices[e]<prices[s]) s = e;
        }
        return maxP;
    }
};
