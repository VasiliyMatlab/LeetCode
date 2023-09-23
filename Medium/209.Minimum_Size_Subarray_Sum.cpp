class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int min_len = INT_MAX;
        int l = 0, r = 0;
        int curr_sum = 0;
        while (r < nums.size()) {
            curr_sum += nums[r];
            while ((l <= r) && (curr_sum >= target)) {
                min_len = min(min_len, r - l + 1);
                curr_sum -= nums[l++];
            }
            r++;
        }
        return (min_len == INT_MAX) ? 0 : min_len;
    }
};