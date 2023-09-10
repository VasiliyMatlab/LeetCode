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
    vector<int> rightSideView(TreeNode* root) {
        if (root == nullptr)
            return {};
        vector<int> res;
        vector<vector<int>> tree;
        queue<TreeNode *> treeQueue;
        treeQueue.push(root);
        while (!treeQueue.empty()) {
            vector<int> tmp;
            int queueLen = treeQueue.size();
            while (queueLen) {
                TreeNode *node = treeQueue.front();
                treeQueue.pop();
                tmp.push_back(node->val);
                if (node->left)
                    treeQueue.push(node->left);
                if (node->right)
                    treeQueue.push(node->right);
                queueLen--;
            }
            tree.push_back(tmp);
        }
        for (int i = 0; i < tree.size(); i++)
            res.push_back(tree[i].back());
        return res;
    }
};