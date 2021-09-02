struct Node {
    int val;
    struct Node *left;
    struct Node *right;
    struct Node *next;
};

void connect_l2r(struct Node *left, struct Node *right) {
    if (left && right) {
        left->next = right;
        connect_l2r(left->right, right->left);
    }
}

struct Node *connect(struct Node *root) {
    if (root) {
        connect_l2r(root->left, root->right);
        connect(root->left);
        connect(root->right);
    }
    return root;
}