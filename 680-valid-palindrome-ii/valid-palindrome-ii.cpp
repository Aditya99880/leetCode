class Solution {
public:
    bool isPalindrome(string &s, int l, int r) {
        while (l < r) {
            if (s[l] != s[r])
                return false;
            l++;
            r--;
        }
        return true;
    }
    
    bool validPalindrome(string s) {
        int l = 0, r = s.size() - 1;
        
        while (l < r) {
            if (s[l] != s[r]) {
                // Try skipping character at index l
                if (isPalindrome(s, l + 1, r))
                    return true;
                
                // Try skipping character at index r
                if (isPalindrome(s, l, r - 1))
                    return true;
                
                
                return false;
            }
            l++;
            r--;
        }
        
        return true;
    }
};
