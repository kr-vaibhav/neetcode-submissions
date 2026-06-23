class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size(), m = 0, ans = 0;

        vector<int>lmax(n,0), rmax(n,0);
        for( int i = 0; i < n; ++i){
            lmax[i] = m;
            m = max(m,height[i]);
        }
        m = 0;
        for( int i = n - 1; i >= 0; --i ){
            rmax[i] = m;
            m = max(m,height[i]);
        }

        for( int i = 0; i < n; ++i ){
            int c =  min(lmax[i],rmax[i]) - height[i];
            c > 0 ? ans+=c : 1;
        }

        return ans;
    }
};
