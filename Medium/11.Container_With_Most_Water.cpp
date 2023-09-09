class Solution {
public:
    int maxArea(vector<int>& height) {
        int l = 0, r = height.size() - 1;
        int max_amount = 0;
        while (l < r) {
            int amount = (r - l) * min(height[l], height[r]);
            max_amount = max(max_amount, amount);
            if (height[l] <= height[r])
                l++;
            else
                r--;
        }
        return max_amount;
    }
};