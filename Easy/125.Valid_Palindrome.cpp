class Solution {
public:
    bool isPalindrome(string s) {
        int l = 0, r = s.size() - 1;
        while (l < r) {
            if (!iswalnum(s[l])) {
                l++;
                continue;
            }
            if (!iswalnum(s[r])) {
                r--;
                continue;
            }
            if (towlower(s[l]) != towlower(s[r]))
                return false;
            l++;
            r--;
        }
        return true;
    }
};