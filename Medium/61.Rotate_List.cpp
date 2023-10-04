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
    ListNode* rotateRight(ListNode* head, int k) {
        if ((head == nullptr) || (head->next == nullptr))
            return head;
        int len = 1;
        ListNode *lastNode = head;
        while (lastNode->next) {
            lastNode = lastNode->next;
            len++;
        }
        k = k % len;
        if (k == 0)
            return head;
        k = len - k;
        ListNode *prevNode = nullptr;
        ListNode *currNode = head;
        while (currNode && k) {
            prevNode = currNode;
            currNode = currNode->next;
            k--;
        }
        prevNode->next = nullptr;
        lastNode->next = head;
        return currNode;
    }
};