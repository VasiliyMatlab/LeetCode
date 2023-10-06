class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ret;
        for (int i = 0; i < strs[0].size(); i++) {
            const char c = strs[0][i];
            bool flag = true;
            for (int j = 1; j < strs.size(); j++) {
                if ((strs[j].size() <= i) || (c != strs[j][i])) {
                    flag = false;
                    break;
                }
            }
            if (!flag)
                break;
            ret += c;
        }
        return ret;
    }
};