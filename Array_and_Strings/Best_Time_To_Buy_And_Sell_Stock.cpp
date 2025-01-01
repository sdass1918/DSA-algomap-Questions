class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxi = prices[0];
        int mini = prices[0];
        int res = INT_MIN;
        for(int i:prices)
        {
            int n = mini;
            mini = min(mini, i);
            if(mini != n)
            {
                maxi = mini;
            }else
            {
                maxi = max(maxi, i);
                res = max(res, maxi-mini);
            }
        }
        return res;
    }
};