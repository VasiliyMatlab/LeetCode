struct ListNode {
    int val;
    struct ListNode *next;
};

unsigned int getLength(struct ListNode *head) {
    unsigned int len = 0;
    while (head) {
        len++;
        head = head->next;
    }
    return len;
}

struct ListNode *removeNthFromEnd(struct ListNode *head, int n) {
    unsigned int len = getLength(head);
    int index = len - n;
    if (index == 0)
        return head->next;
    struct ListNode *tmp = head;
    for (int i = 0; i < index-1; i++)
        head = head->next;
    head->next = head->next->next;
    return tmp;
}