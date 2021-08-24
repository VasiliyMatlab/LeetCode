struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* deleteDuplicates(struct ListNode* head){
    if (head) {
        struct ListNode **ptr = &head;
        while ((*ptr)->next) {
            if ((*ptr)->val == (*ptr)->next->val)
                *ptr = (*ptr)->next;
            else
                ptr = &(*ptr)->next;
        }
    }
    return head;
}