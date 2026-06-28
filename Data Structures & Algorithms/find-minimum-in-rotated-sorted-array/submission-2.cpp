class Solution {
public:
    int findMin(vector<int> &nums) {
        int n = nums.size();
        int i = 0, j = n - 1;

        while( i <= j ){
            int mid = i + ( j - i )/2;

            int num = nums[mid];
            if( nums[ (mid-1+n) % n ] > num && nums[ (mid+1+n) % n ] > num)return num;
            else if(num > nums[j])i = mid + 1;
            else{
                j = mid - 1;
            }
        }

        return nums[i];
    }
};
