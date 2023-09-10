/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int pathSum(TreeNode* root, int targetSum) {
        if (root == nullptr)
            return 0;
        int reqPaths = 0;
        reqPaths += findPartSum(root, targetSum);
        reqPaths += pathSum(root->left, targetSum);
        reqPaths += pathSum(root->right, targetSum);
        return reqPaths;
    }

private:
    int findPartSum(TreeNode *root, long long sum) {
        if (root == nullptr)
            return 0;
        int ans = 0;
        if (root->val == sum)
            ans++;
        ans += findPartSum(root->left, sum - root->val);
        ans += findPartSum(root->right, sum - root->val);
        return ans;
    }
};