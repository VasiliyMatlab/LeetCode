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
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> leafs1 = getLeafs(root1);
        vector<int> leafs2 = getLeafs(root2);
        return (leafs1 == leafs2);
    }

private:
    vector<int> getLeafs(TreeNode *root) {
        if (root == nullptr)
            return {};
        if ((root->left == nullptr) && (root->right == nullptr))
            return {root->val};
        vector<int> leftSide = getLeafs(root->left);
        vector<int> rightSide = getLeafs(root->right);
        leftSide.insert(leftSide.end(), rightSide.begin(), rightSide.end());
        return leftSide;
    }
};