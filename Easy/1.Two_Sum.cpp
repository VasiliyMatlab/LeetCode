class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> storage;
        for (int i = 0; i < nums.size(); i++) {
            int prefix = target - nums[i];
            if (storage.contains(prefix))
                return {storage[prefix], i};
            storage[nums[i]] = i;
        }
        return {};
    }
};