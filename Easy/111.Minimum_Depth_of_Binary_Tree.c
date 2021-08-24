struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

int minDepth(struct TreeNode* root){
    if (!root)
        return 0;
    int l = minDepth(root->left) + 1;
    int r = minDepth(root->right) + 1;
    if (!root->left && root->right)
        l = r;
    if (root->left && !root->right)
        r = l;
    if (l <= r)
        return l;
    return r;
}