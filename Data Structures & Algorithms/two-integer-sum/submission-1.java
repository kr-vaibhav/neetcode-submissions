class Solution {
    public int[] twoSum(int[] nums, int target) {
       // Arrays.sort(nums);
        int i = 0, j = nums.length-1;

        for(int l = 0; l < nums.length; ++l ){
            for( int m = l + 1 ; m < nums.length; ++m){
                if(nums[l]+nums[m]==target)return new int[]{l,m};
            }
        }
        return new int[]{i,j};
    }
}
