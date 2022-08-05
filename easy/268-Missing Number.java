class Solution {
    public int missingNumber(int[] nums) {
        int sum = 0, correct = 0;
        for(int i = 0; i < nums.length; ++i){
            sum += nums[i];
            correct += i;
        }
        correct += nums.length;
        
        return correct - sum;
        
    }
}
