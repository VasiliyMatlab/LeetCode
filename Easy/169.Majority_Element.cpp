class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int curr_elem, cnt = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (cnt == 0)
                curr_elem = nums[i];
            cnt += (nums[i] == curr_elem) ? 1 : -1;
        }
        return curr_elem;
    }
};