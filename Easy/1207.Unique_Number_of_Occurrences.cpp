class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int, int> dict;
        for (auto k: arr) {
            dict[k]++;
        }

        set<int> freq;
        for (auto [key, value]: dict) {
            freq.insert(value);
        }

        return (freq.size() == dict.size());
    }
};