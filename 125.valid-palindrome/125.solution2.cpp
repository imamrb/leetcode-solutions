class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0, right = s.length() - 1; 
        
        for (left, right; left < right; left++, right--) { 
            while(!isalnum(s[left])  && left < right) left++;
            while(!isalnum(s[right])  && left < right) right--;
            
            if (tolower(s[left]) != tolower(s[right])) return false;
        }

        return true;
    }
};
