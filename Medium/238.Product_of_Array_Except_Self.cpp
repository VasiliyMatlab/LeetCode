class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> prefix(nums.size() + 2, 1), suffix(nums.size() + 2, 1);
        for (int i = 0; i < nums.size(); i++)
            prefix[i+1] = prefix[i] * nums[i];
        for (int i = nums.size() - 1; i >= 0; i--)
            suffix[i+1] = suffix[i+2] * nums[i];
        vector<int> res(nums.size());
        for (int i = 0; i < nums.size(); i++)
            res[i] = prefix[i] * suffix[i+2];
        return res;
    }
};