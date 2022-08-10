class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int len = nums.size();
        
        sort(nums.begin(), nums.end());
        
        int cnt = 0, maxCnt = 0, ans;
        
        for(int i = 0; i<len; i++) {
            cnt = 1;
            while(i+1 < len && nums[i] == nums[i+1]) {
                cnt++;
                i++;
            }
            maxCnt = max(cnt, maxCnt);
            if(maxCnt == cnt) ans = nums[i];
        }
        
        return ans;
    }
};