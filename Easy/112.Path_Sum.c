#include <stdbool.h>

struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

bool hasPathSum(struct TreeNode* root, int targetSum){
    if (!root)
        return false;
    if (!root->right && !root->left) {
        if (root->val == targetSum)
            return true;
        else
            return false;
    }
    bool l = false, r = false;
    if (!root->left && root->right)
        r = hasPathSum(root->right, targetSum - root->val);
    else if (root->left && !root->right)
        l = hasPathSum(root->left, targetSum - root->val);
    else {
        r = hasPathSum(root->right, targetSum - root->val);
        l = hasPathSum(root->left, targetSum - root->val);
    }
    return (r || l); 
}