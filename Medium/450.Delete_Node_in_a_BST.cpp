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
    TreeNode* deleteNode(TreeNode* root, int key) {
        if (root == nullptr)
            return nullptr;
        if (key < root->val)
            root->left = deleteNode(root->left, key);
        else if (key > root->val)
            root->right = deleteNode(root->right, key);
        else {
            if ((root->left == nullptr) || (root->right == nullptr))
                root = (root->left == nullptr) ? root->right : root->left;
            else {
                TreeNode *maxInLeft = findMaxNode(root->left);
                root->val = maxInLeft->val;
                root->left = deleteNode(root->left, root->val);
            }
        }
        return root;
    }

private:
    TreeNode *findMaxNode(TreeNode *root) {
        while (root->right != nullptr) {
            root = root->right;
        }
        return root;
    }
};