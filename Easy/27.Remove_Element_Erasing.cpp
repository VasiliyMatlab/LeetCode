class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int hits = 0, i = 0;
        while (i < nums.size()) {
            if (nums[i] == val) {
                nums.erase(nums.begin() + i);
                continue;
            }
            i++;
        }
        return nums.size();
    }
};