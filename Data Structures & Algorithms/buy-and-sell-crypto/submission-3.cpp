class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        if(n==1)return 0;
        int i = 0, j = 1, ans = 0;

        while(j < n ){
            ans = max(ans, prices[j]-prices[i]);

            if( prices[j] < prices[i] ){
                i = j; 
            }
            j++;
        }

        return ans;
    }
};
