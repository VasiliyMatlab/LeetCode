class Solution {
public:
    string reverseVowels(string s) {
        int l = 0, r = s.size() - 1;
        while (l < r) {
            if (vowels.count(s[l]) && vowels.count(s[r])) {
                swap(s[l++], s[r--]);
                continue;
            }
            if (!vowels.count(s[l])) {
                l++;
                continue;
            }
            r--;
        }
        return s;
    }
private:
    set<char> vowels = {'a','e','i','o','u','A','E','I','O','U'};
};