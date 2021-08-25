struct ListNode {
    int val;
    struct ListNode *next;
};

// Вернуть длину списка
unsigned int getLength(struct ListNode *head) {
    unsigned int len = 0;
    while (head) {
        len++;
        head = head->next;
    }
    return len;
}

struct ListNode *middleNode(struct ListNode *head) {
    unsigned int len = getLength(head);
    for (int i = 0; i < len/2; i++)
        head = head->next;
    return head;
}