class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int target = accumulate(nums.begin(), nums.end(), 0) - x;
        int max_len = -1;
        int curr_sum = 0;
        for (int l = 0, r = 0; r < nums.size(); r++) {
            curr_sum += nums[r];
            while ((l <= r) && (curr_sum > target))
                curr_sum -= nums[l++];
            if (curr_sum == target)
                max_len = max(max_len, r - l + 1);
        }
        return (max_len == -1) ? -1 : nums.size() - max_len;
    }
};