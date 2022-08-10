class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int len = s.length(); 
        int feq[256] = { 0 };
        
        int j = 0; 
        int max_substr = 0, curr_substr = 0;
        
        for(int i = 0; i < len; i++) {
            feq[s[i]]++;
            curr_substr++;
            
            while(feq[s[i]] > 1) {
                feq[s[j]]--;
                j++; 
                curr_substr--; 
            }
            
            max_substr = max(curr_substr, max_substr);
        }
       
        max_substr = max(curr_substr, max_substr);
        
        return max_substr;
    }
};