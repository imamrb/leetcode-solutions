class Solution {
public:
    bool isPalindrome(string s) {
        int len = s.length();
        string a = "";

        for(int i=0; i<len; i++){
          if(s[i]>=97 && s[i]<=122 || s[i]>=48 && s[i]<=57) {
              a += s[i];
          } else if(s[i]>=65 && s[i]<= 90) {
              a += tolower(s[i]);
          }
        }

        len = a.length();

        for(int i=0; i<len/2; i++){
            if(a[i] != a[len-i-1]) return false;
        }
        
        return true;
    }
};
