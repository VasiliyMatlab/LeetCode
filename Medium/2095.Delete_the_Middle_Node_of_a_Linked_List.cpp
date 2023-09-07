class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if (head->next == nullptr)
            return nullptr;
        ListNode *tmp = head;
        int len = 0;
        while (tmp != nullptr) {
            len++;
            tmp = tmp->next;
        }
        int target = len / 2;
        tmp = head;
        for (int i = 0; i < (target - 1); i++) {
            tmp = tmp->next;
        }
        tmp->next = tmp->next->next;
        return head;
    }
};