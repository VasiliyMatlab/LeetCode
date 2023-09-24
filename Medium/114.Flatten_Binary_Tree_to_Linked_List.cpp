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
    void flatten(TreeNode* root) {
        if (root == nullptr)
            return;
        vector<int> nodes = DFS(root);
        TreeNode *out = root;
        TreeNode *tmp = new TreeNode();
        tmp->right = out;
        while (out) {
            out->val = nodes[0];
            nodes.erase(nodes.begin());
            out->left = nullptr;
            tmp = out;
            out = out->right;
        }
        while (!nodes.empty()) {
            tmp->right = new TreeNode(nodes[0]);
            tmp->left = nullptr;
            tmp = tmp->right;
            nodes.erase(nodes.begin());
        }
    }

private:
    vector<int> DFS(TreeNode *root) {
        if (root == nullptr)
            return {};
        vector<int> ret = {root->val};
        vector<int> ret_left = DFS(root->left);
        vector<int> ret_right = DFS(root->right);
        ret.insert(ret.end(), ret_left.begin(), ret_left.end());
        ret.insert(ret.end(), ret_right.begin(), ret_right.end());
        return ret;
    }
};