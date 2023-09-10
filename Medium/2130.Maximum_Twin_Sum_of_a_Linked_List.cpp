/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int pairSum(ListNode* head) {
        vector<int> storage;
        while (head) {
            storage.push_back(head->val);
            head = head->next;
        }
        int maxsum = 0;
        for (int i = 0; i <= ((storage.size()/2) - 1); i++) {
            maxsum = max(maxsum, storage[i] + storage[storage.size() - 1 - i]);
        }
        return maxsum;
    }
};