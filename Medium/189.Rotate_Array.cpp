class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> ret(nums.size());
        for (int i = 0; i < nums.size(); i++)
            ret[(i + k) % nums.size()] = nums[i];
        nums = ret;
    }
};