class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int prof=0,temp;
        int n=prices.size();
        int pmax=prices[n-1];
        for(int i=n-2;i>=0;i--)
        {
            if(prices[i]>pmax && i!=0) pmax=prices[i];
            else
            {
                prof=max(prof,pmax-prices[i]);
            }
        }
        return prof;
    }
};