#include <stddef.h>

struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

struct TreeNode* invertTree(struct TreeNode* root){
    if (!root)
        return NULL;
    struct TreeNode *r = invertTree(root->right);
    struct TreeNode *l = invertTree(root->left);
    root->left = r;
    root->right = l;
    return root;
}