class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum = 0, prefixsum = 0;
        for (auto k: nums)
            sum += k;
        for (size_t i = 0; i < nums.size(); i++) {
            if (prefixsum == (sum - prefixsum - nums[i]))
                return i;
            prefixsum += nums[i];
        }
        return -1;
    }
};