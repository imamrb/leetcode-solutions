class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int len = s.length(); 
        vector<int> feq(256, -1);
        
        int left = 0; 
        int max_substr = 0;
        
        // Make left jump to the repeating character instead of removing one by one
        for(int i = 0; i < len; i++) {
            if(feq[s[i]] != -1) left = max(feq[s[i]] + 1, left);
                
            feq[s[i]] = i;
            max_substr = max(max_substr, i-left+1);
        }
        
        return max_substr;
    }
};