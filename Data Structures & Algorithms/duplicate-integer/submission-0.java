class Solution {
    public boolean hasDuplicate(int[] nums) {
        HashSet<Integer> hs = new HashSet<>();
        for( int len = 0; len < nums.length; ++len){
            if(hs.contains(nums[len]))return true;
            else hs.add(nums[len]);
        }
        return false;
    }
}