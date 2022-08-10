class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int mx = nums[0];
        int cs = mx;
        int len = nums.size();
        
        // If all numbers are negative, then only the smallest one matters
        // Else, maintain current sum if current sum is positive
    
        for(int i = 1; i < len; i++) {
           if(cs+nums[i] > 0) {
               cs = max(nums[i], nums[i]+cs);
           } else {
               cs = nums[i];
           }
           
           mx = max(cs, mx);
        }
        
        return mx;
    }
};