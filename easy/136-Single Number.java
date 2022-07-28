class Solution {
    public int singleNumber(int[] nums) {
        int buffer = nums[0];
        for(int i = 1; i < nums.length; i++){
            buffer = buffer ^ nums[i];
        }
        
        return buffer;
    }
}
