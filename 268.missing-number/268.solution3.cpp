class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        
        int sum = n*(2 + (n-1))/2;
        
        int givenSum = 0;
        
        for(auto it: nums) givenSum += it;
        
        return sum - givenSum;
    }
};