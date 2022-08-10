class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int res = 0;
        int len = nums.size();
        
        for(int i = 0; i<len; i++) {
            res ^= (i+1);
            res ^= nums[i];
        }

        return res;
    }
};