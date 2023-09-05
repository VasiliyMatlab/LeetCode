class Solution {
public:
    set<char> vowels = {'a', 'e', 'i', 'o', 'u'};

    int maxVowels(string s, int k) {
        vector<int> isvowels(s.size());
        for (auto k: s) {
            isvowels.push_back(vowels.count(k));
        }
        int sum = 0;
        for (size_t i = 0; i < k; i++) {
            sum += isvowels[i];
        }
        int res = sum;
        for (size_t i = k; i < isvowels.size(); i++) {
            sum += (isvowels[i] - isvowels[i-k]);
            res = max(res, sum);
        }
        return res;
    }
};