#include <stdbool.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

unsigned int getlength(struct ListNode *head) {
    if (!head)
        exit(4);
    unsigned int len = 0;
    while (head) {
        len++;
        head = head->next;
    }
    return len;
}

bool isPalindrome(struct ListNode* head){
    unsigned int len = getlength(head);
    int *array = (int*) malloc((len / 2)*sizeof(int));
    int i = 0;
    int j = len / 2 - 1;
    while (i < len / 2) {
        array[i] = head->val;
        head = head->next;
        i++;
    }
    if (len % 2 == 1) {
        i++;
        head = head->next;
    }
    while (i < len) {
        if (head->val != array[j])
            return 0;
        head = head->next;
        i++;
        j--;
    }
    return 1;
}