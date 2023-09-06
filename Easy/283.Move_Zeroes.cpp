class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        size_t i = 0;
        size_t len = nums.size();
        while (i < len) {
            if (nums[i] == 0) {
                size_t tmp = i;
                while (tmp != (len - 1)) {
                    nums[tmp] = nums[tmp+1];
                    nums[tmp+1] = 0;
                    tmp++;
                }
                len--;
            } else {
                i++;
            }
        }
    }
};