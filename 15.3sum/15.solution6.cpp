class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int len = nums.size();
        vector<int> triplet(3);
        
        vector<vector<int> > ans;
        
        for(int i = 0; i < len - 2; i++) {
            triplet[0] = nums[i];
            for(int j = i+1; j < len - 1; j++) {
                triplet[1] = nums[j];
                triplet[2]= -(triplet[0] + triplet[1]);

                int fi = lower_bound(nums.begin()+j+1, nums.end(), triplet[2]) - nums.begin();

                if(fi < len && nums[fi] == triplet[2]) {
                    ans.push_back(triplet);
                }
                
                while(j < len - 1 && nums[j] == nums[j+1]) j++;
            }
            
            while(i < len - 1 && nums[i] == nums[i+1]) i++;            
        }

        return ans;
    }
};