class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans;
        int mul = 1, res; 
        int sz = nums.size();
        
        for(int i = 0; i<sz; i++){
            mul*=nums[i];
            ans.push_back(mul);
        }
        
        mul = 1;
        for(int i=sz-1; i>0; i--){
            res = ans[i-1] * mul;
            ans[i] = res;
            mul*=nums[i];
        }
        ans[0] = mul;
        
        return ans;
    }
};