class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int len = s.length(); 
        int feq[256] = { 0 };
        
        int j = 0; 
        int max_substr = 0;
        
        for(int i = 0; i < len; i++) {
            feq[s[i]]++;
            
            while(feq[s[i]] > 1) {
                feq[s[j]]--;
                j++; 
            }
            
            max_substr = max(max_substr, i-j+1);
        }
        
        return max_substr;
    }
};