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
        int maxsum = INT_MIN, level = 0;
        for (int i = 0; i < tree.size(); i++) {
            int currsum = vectorSum(tree[i]);
            if (maxsum < currsum) {
                maxsum = currsum;
                level = i + 1;
            }
        }
        return level;
    }

private:
    int vectorSum(vector<int> vec) {
        int sum = 0;
        for (auto k: vec)
            sum += k;
        return sum;
    }
};