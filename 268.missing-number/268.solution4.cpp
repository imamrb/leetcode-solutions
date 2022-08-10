class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        
        long long sum = (long long)(n*(2 + (n-1)))/2;
        
        long long givenSum = 0;
        
        for(auto it: nums) givenSum += it;
        
        return sum - givenSum;
    }
};