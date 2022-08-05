class Solution {
    public int[] countBits(int n) {
        var ans = new int[n + 1];
        
        for(int i = 0; i < n + 1; ++i){
            ans[i] = 0;
            int num = i;
            while(num != 0){
                ans[i] += num & 1;
                num /= 2;
            }
        }
        
        return ans;
    }
}
