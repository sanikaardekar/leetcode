class Solution {
public:
    //123765
    int maxProfit(vector<int>& prices) {
        if(prices.size()==1) return 0;
        //int mini = *min_element(prices.begin(),prices.end());
        int mini=INT_MAX; int profit=0, pist;
        for(int i=0;i<prices.size();i++)
        {
            if(mini>prices[i])
            {
                mini=prices[i];
            }
           pist = prices[i] - mini;
            profit = max(pist, profit);
        }
        
        
        return profit;
    }
};