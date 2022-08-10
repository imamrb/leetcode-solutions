class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int len = nums.size();

        int current = nums[0], cnt = 1;
        
        for(int i = 1; i<len; i++) {
            if(cnt==0) {
                current = nums[i];
                cnt++;
            } else if(nums[i] == current) {
                cnt++;
            } else cnt--;
        }
        
        return current;
    }
};