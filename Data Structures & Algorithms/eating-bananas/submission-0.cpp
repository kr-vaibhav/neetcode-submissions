class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        
        int count = 0, mn = 0, mx = 0, ans = 0;

        for( int n : piles ){
            if( n > mx )mx = n;
            count += n;
        }

        int i = 1, j = mx;

        while( i <= j ){
            int mid = i + (j-i)/2;
            int hour = 0;
            for( int k = 0; k < piles.size(); ++k ){
                hour += ceil(double(piles[k])/mid);
            }
            if( hour <= h){
                j = mid - 1;
                ans = mid;
            }else{
                i = mid + 1;
            }
        }
        return ans;
    }
};
