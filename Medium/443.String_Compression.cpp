class Solution {
public:
    int compress(vector<char>& chars) {
        int i = 0, len = 0;
        while (i < chars.size()) {
            int grouplen = findgrouplen(chars, i);
            chars[len++] = chars[i];
            if (grouplen > 1) {
                for (char c: to_string(grouplen))
                    chars[len++] = c;
            }
            i += grouplen;
        }
        return len;
    }
private:
    int findgrouplen(vector<char>& chars, int idx_start) {
        int res = 1;
        for (int i = idx_start + 1; i < chars.size(); i++, res++) {
            if (chars[idx_start] != chars[i])
                return res;
        }
        return res;
    }
};