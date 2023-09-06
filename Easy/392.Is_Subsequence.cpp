class Solution {
public:
    bool isSubsequence(string s, string t) {
        ssize_t i = 0;
        for (auto c: t) {
            if (s[i] == c)
                i++;
        }
        return (i == s.size());
    }
};