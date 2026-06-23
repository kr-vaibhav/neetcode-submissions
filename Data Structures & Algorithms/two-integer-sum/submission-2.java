class Solution {
    public int[] twoSum(int[] nums, int target) {
       // Arrays.sort(nums);
        int i = 0, j = nums.length-1;

        HashMap<Integer, Integer>hm = new HashMap<>();
        for(int l = 0; l < nums.length; ++l){
            i = nums[l];
            j = target-i;
            if(hm.containsKey(j)==true)return new int[]{hm.get(j),l};
            else{hm.put(i,l);}
        }

        return new int[2];
    }
}
