class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
       vector<int> nums1_copy(m);
        for (int i = 0; i < m; i++)
            nums1_copy[i] = nums1[i];
        int p1 = 0, p2 = 0;
        for (int i = 0; i < (m + n); i++) {
            if (p1 >= m) {
                nums1[i] = nums2[p2++];
                continue;
            }
            if (p2 >= n) {
                nums1[i] = nums1_copy[p1++];
                continue;
            }
            if (nums1_copy[p1] > nums2[p2])
                nums1[i] = nums2[p2++];
            else
                nums1[i] = nums1_copy[p1++];
        } 
    }
};