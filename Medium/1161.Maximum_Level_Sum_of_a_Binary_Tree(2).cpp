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
    int maxLevelSum(TreeNode* root) {
        if (root == nullptr)
            return {};
        vector<int> res;
        queue<TreeNode *> treeQueue;
        treeQueue.push(root);
        while (!treeQueue.empty()) {
            int sum = 0;
            int queueLen = treeQueue.size();
            while (queueLen) {
                TreeNode *node = treeQueue.front();
                treeQueue.pop();
                sum += node->val;
                if (node->left)
                    treeQueue.push(node->left);
                if (node->right)
                    treeQueue.push(node->right);
                queueLen--;
            }
            res.push_back(sum);
        }
        int maxsum = INT_MIN, level = 0;
        for (int i = 0; i < res.size(); i++) {
            if (maxsum < res[i]) {
                maxsum = res[i];
                level = i + 1;
            }
        }
        return level;
    }
};