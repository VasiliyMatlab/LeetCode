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
    ListNode* oddEvenList(ListNode* head) {
        int iterate = getLength(head) / 2;
        ListNode *iter = head;
        for (int i = 0; i < iterate; i++) {
            ListNode *tmp = iter->next;
            iter->next = iter->next->next;
            iter = pushToBack(iter, tmp);
            iter = iter->next;
        }
        return head;
    }
private:
    int getLength(ListNode *head) {
        int len = 0;
        while (head) {
            len++;
            head = head->next;
        }
        return len;
    }

    ListNode *pushToBack(ListNode *head, ListNode *node) {
        ListNode *res = head;
        while (head->next)
            head = head->next;
        head->next = node;
        head->next->next = nullptr;
        return res;
    }
};