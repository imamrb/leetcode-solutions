class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int mx = nums[0];
        int cs = mx;
        for(int i = 1; i < nums.size(); i++) {
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