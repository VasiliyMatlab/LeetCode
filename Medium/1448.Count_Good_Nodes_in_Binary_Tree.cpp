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
    int goodNodes(TreeNode* root) {
        vector<int> trace = {root->val};
        return (findGoodNodes(root->left, trace) + findGoodNodes(root->right, trace) + 1);
    }
    
private:
    int findGoodNodes(TreeNode *root, vector<int> trace) {
        if (root == nullptr)
            return 0;
        int goods = 0;
        if (root->val >= *max_element(begin(trace), end(trace)))
            goods++;
        trace.push_back(root->val);
        goods += findGoodNodes(root->left, trace);
        goods += findGoodNodes(root->right, trace);
        return goods;
    }
};