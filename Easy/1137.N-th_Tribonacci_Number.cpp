class Solution {
public:
    int tribonacci(int n) {
        if (n < 2)
            return n;
        vector<int> nums = {0, 1, 1};
        for (int i = 3; i <= n; i++)
            nums.push_back(nums[i-1] + nums[i-2] + nums[i-3]);
        return nums.back();
    }
};