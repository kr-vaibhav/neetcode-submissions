class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = INT_MAX, sell = INT_MIN, ans = 0, i = 0, n = prices.size()-1;

        for( i = 0; i < n; ++i ){
            int b = prices[i];
            
            for( int j = n; j > i; --j ){
                int s = prices[j];
                ans = max(ans, s-b);
            }
        }
        
        
        return ans;
    }
};
