class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l,r,n,ans;
        n = heights.size(), l = heights[0], r = heights[n-1], ans = 0;
        int i = 0, j = n-1;
        while(i<j){
            ans = max(ans,(min(heights[i],heights[j]))*(j-i));
            if( heights[i] > heights[j]){
                j--;
            }else if( heights[i] < heights[j] && i + 1 < n){
                i++;
            }else{
                if( i + 1 < n && heights[i+1] > heights[j-1])i++;
                else j--;
            }
        }
        return ans;
    }
};
