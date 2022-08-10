class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        
        int len = nums.size(), num1, num2, num3;
        vector<int> triplet(3);
        vector<vector<int> > ans;

        for(int i = 0; i < len - 2; i++) {
            num1 = nums[i];
            
            for(int j = i+1; j < len - 1; j++) {
                num2 = nums[j];
                num3 = -(num1 + num2);
                
                if(num3 < num2) break;
                    
                auto it_3 = lower_bound(nums.begin()+j+1, nums.end(), num3);

                if(it_3 != nums.end() && *it_3 == num3) {
                    triplet = { num1, num2, num3 };
                    ans.push_back(triplet);
                }
                
                while(j < len - 1 && nums[j] == nums[j+1]) j++;
            }
            
            while(i < len - 1 && nums[i] == nums[i+1]) i++;            
        }

        return ans;
    }
};