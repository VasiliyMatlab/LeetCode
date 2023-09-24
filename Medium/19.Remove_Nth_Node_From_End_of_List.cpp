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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int target = getLen(head) - n;
        if (target == 0)
            return head->next;
        ListNode *tmp = head;
        for (int i = 0; i < (target - 1); i++, tmp = tmp->next);
        tmp->next = tmp->next->next;
        return head;
    }

private:
    int getLen(ListNode *head) {
        int len = 0;
        while (head) {
            len++;
            head = head->next;
        }
        return len;
    }
};