class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ret;
        int n = nums.size() / 3;
        unordered_map<int, int> storage;
        for (const int k: nums) {
            storage[k]++;
        }
        for (const auto &[key, value]: storage) {
            if (value > n) {
                ret.push_back(key);
            }
        }
        return ret;
    }
};