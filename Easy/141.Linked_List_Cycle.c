#include <stdbool.h>
#include <stddef.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

bool hasCycle(struct ListNode *head) {
    if (!head)
        return 0;
    while (head) {
        if (head->val == NULL)
            return 1;
        head-> val = NULL;
        head = head->next;
    }
    return 0;
}