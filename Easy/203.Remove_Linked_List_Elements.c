#include <stddef.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode *init() {
    struct ListNode *head = malloc(sizeof(struct ListNode));
    head->val = 0;
    head->next = NULL;
    return head;
}

void push(struct ListNode *head, int value) {
    struct ListNode *tmp = init();
    if (!tmp)
        exit(3);
    tmp->next = head->next;
    tmp->val = head->val;
    head->val = value;
    head->next = tmp;
}

int pop(struct ListNode **head) {
    if (!(*head))
        exit(4);
    int value = (*head)->val;
    struct ListNode *tmp = (*head)->next;
    *head = tmp;
    return value;
}

struct ListNode *reverseList(struct ListNode *head) {
    if (!head)
        return head;
    int i = 0;
    int *array = NULL;
    while (head) {
        i++;
        array = (int*) realloc(array, i*sizeof(int));
        array[i-1] = pop(&head);
    }
    int len = i;
    struct ListNode *tmp = init();
    if (!tmp)
        exit(4);
    tmp->val = array[0];
    for (i = 1; i < len; i++) {
        push(tmp, array[i]);
    }
    return tmp;
}

struct ListNode* removeElements(struct ListNode* head, int val){
    if (!head || val == 0)
        return head;
    struct ListNode *tmp = NULL;
    while (head) {
        if (head->val == val) {
            pop(&head);
        }
        else {
            if (!tmp) {
                tmp = init();
                tmp->val = head->val;
                head = head->next;
            }
            else {
                push(tmp, pop(&head));
            }
        }
    }
    return reverseList(tmp);
}