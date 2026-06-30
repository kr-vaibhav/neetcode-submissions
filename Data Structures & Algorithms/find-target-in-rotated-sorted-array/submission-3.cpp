class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        int i = 0, n = nums.size(), j = n - 1;

        for( int k = 0; k < n; ++k ){
            if( nums[k] == target )return k;
        }

        return -1;

        while( i <= j ){
            int mid = i + ( j - i )/2;
            if( nums[mid] == target )return mid;
            
        }
    }
};
