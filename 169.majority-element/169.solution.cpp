class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int len = nums.size();

        int current = nums[0], cnt = 1;

        for(int i = 1; i<len; i++) {
            if(cnt==0) current = nums[i];

            nums[i] == current ? cnt++ : cnt--;
        }

        return current;
    }
};
