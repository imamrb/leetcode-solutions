class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        bool flag = false;
        int nlen = nums.size();
        map<int, int> mp;
        
        for(int i = 0; i<nlen; i++) {
            mp[nums[i]]++;
            if(mp[nums[i]] > 1) {
                flag = true;
                break;
            }
        }
        
        return flag;
    }
};