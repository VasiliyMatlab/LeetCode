#include <stdbool.h>

struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

int depth(struct TreeNode* root){
    if(!root)
        return true;
    int l = depth(root->left);
    int r = depth(root->right);
    if (l > r)
        return l+1;
    else
        return r+1;
}

bool isBalanced(struct TreeNode* root){
    if(!root)
        return true;
    int l = depth(root->left);
    int r = depth(root->right);
    if ((abs(l - r) > 1))
        return false;
    return isBalanced(root->left) && isBalanced(root->right);
}