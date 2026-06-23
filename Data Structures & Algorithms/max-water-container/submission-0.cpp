class Solution {
public:
    int maxArea(vector<int>& heights) {
        int lmax = 0, rmax = 0,i = 0, j = heights.size()-1, ans = 0;
        j = heights[j];
        i = heights[i];
        ans = min(i,j)*(j-i);
        for(i = 0; i < heights.size(); ++i){
            for(j =i+1; j < heights.size(); ++j){
                ans = max(ans,min(heights[i],heights[j])*(j-i));
            }
        }
        return ans;
    }
};
