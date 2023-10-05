class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> storage;
        for (int i = 0; i < nums.size(); i++) {
            if (storage.contains(nums[i])) {
                if (abs(i - storage[nums[i]]) <= k) {
                    return true;
                }
            }
            storage[nums[i]] = i;
        }
        return false;
    }
};