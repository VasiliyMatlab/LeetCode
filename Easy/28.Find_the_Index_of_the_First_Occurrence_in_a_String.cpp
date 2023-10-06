class Solution {
public:
    int strStr(string haystack, string needle) {
        if (needle.size() > haystack.size())
            return -1;
        for (int i = 0; i <= (haystack.size() - needle.size()); i++) {
            int j = i, k = 0;
            for (; (j < haystack.size()) && (k < needle.size()); j++, k++) {
                if (haystack[j] != needle[k])
                    break;
            }
            if (k == needle.size())
                return i;
        }
        return -1;
    }
};