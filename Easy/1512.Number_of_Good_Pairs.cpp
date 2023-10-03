class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int, int> storage;
        for (const int k: nums)
            storage[k]++;
        int goodPairs = 0;
        for (const auto &[key, value]: storage)
            goodPairs += value*(value-1) / 2;
        return goodPairs;
    }
};