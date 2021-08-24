#include <stdbool.h>

struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

bool go(struct TreeNode* p, struct TreeNode* q) {
    if (p->val != q->val)
        return false;
    bool log = true;
    if (p->left && q->left)
        log = go(p->left,q->left);
    else if (!p->left && q->left)
        return false;
    else if (p->left && !q->left)
        return false;
    if (log && p->right && q->right)
        log = go(p->right,q->right);
    else if (!p->right && q->right)
        return false;
    else if (p->right && !q->right)
        return false;
    return log;
}

bool isSameTree(struct TreeNode* p, struct TreeNode* q){
    if (!p && !q)
        return true;
    if (!p && q)
        return false;
    if (p && !q)
        return false;
    if (p->val != q->val)
        return false;
    return go(p,q);
}