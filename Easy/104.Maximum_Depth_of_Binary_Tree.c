struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

int maxDepth(struct TreeNode* root){
    if (!root)
        return 0;
    unsigned k1 = 0;
    unsigned k2 = 0;
    if (root->left) {
        k1 = maxDepth(root->left);
        
    }
    if (root->right) {
        k2 = maxDepth(root->right);
        
    }
    return (k1 > k2) ? k1+1 : k2+1; 
}