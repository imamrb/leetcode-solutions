class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int len = nums.size();
        vector<int> vect;
        
        for(int i=0; i<len-1; i++){
            for(int j=i+1; j<len; j++){
                if(nums[i] + nums[j] == target){
                    vect.push_back(i);
                    vect.push_back(j);
                    
                    return vect;
                }
            }
        }
        return vect;
    }
};