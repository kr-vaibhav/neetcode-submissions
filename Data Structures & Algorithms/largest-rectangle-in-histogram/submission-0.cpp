class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int ans = 0, n = heights.size(); 

        for( int i = 0; i < n; ++i ){

            int ht = heights[i], temp = 0;

            for( int j = 0; j < n; ++j ){
                
                int ht1 = heights[j];

                if( ht <= ht1 ){
                    temp += ht;
                    ans = max(ans, temp);
                }else{
                    temp = 0;
                }
            }
        }

        return ans;
    }
};
