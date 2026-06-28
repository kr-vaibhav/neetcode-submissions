class Solution {
public:
    int findMin(vector<int> &nums) {
        int mn = INT_MAX;
        for( int n : nums ){
            if( n < mn)mn = n;
        }

        return mn;
    }
};
