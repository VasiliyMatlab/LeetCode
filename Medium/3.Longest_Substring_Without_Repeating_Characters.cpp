class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int max_len = 0;
        int l = 0, r = 0;
        set<char> mem;
        while (r < s.size()) {
            while (mem.contains(s[r])) {
                mem.erase(s[l++]);
            }
            mem.insert(s[r]);
            max_len = max(max_len, r - l + 1);
            r++;
        }
        return max_len;
    }
};