class Solution {
public:
    int search(vector<int>& nums, int target) {
        int i = 0, j = nums.size();

        while( i <= j ){
            int mid = i + (j-i)/2;
            int n = nums[mid];
            if( n == target)return mid;
            else if( n > target ){
                j = mid - 1;
            }else{
                i = mid + 1;
            }
        }

        return -1;
    }
};
