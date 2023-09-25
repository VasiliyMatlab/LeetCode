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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> averages;
        queue<TreeNode *> treeQueue;
        treeQueue.push(root);
        while (!treeQueue.empty()) {
            vector<int> tmp;
            int queueLen = treeQueue.size();
            while (queueLen--) {
                TreeNode *node = treeQueue.front();
                treeQueue.pop();
                tmp.push_back(node->val);
                if (node->left)
                    treeQueue.push(node->left);
                if (node->right)
                    treeQueue.push(node->right);
            }
            averages.push_back(avr(tmp));
        }
        return averages;
    }

private:
    double avr(vector<int> &vec) {
        double res = 0;
        for (const int c: vec)
            res += c;
        return (res / vec.size());
    }
};