class Solution {
public:
    int lengthOfLastWord(string s) {
        int len = 0;
        bool find_word = false;
        for (int i = s.size() - 1; i >= 0; i--) {
            if (s[i] == ' ') {
                if (find_word)
                    return len;
            } else {
                find_word = true;
                len++;
            }
        }
        return len;
    }
};