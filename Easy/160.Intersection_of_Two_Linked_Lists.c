#include <stddef.h>

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

struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    if(headA==NULL || headB==NULL) return NULL;
        struct ListNode* p=headA,*q=headB;
        int lenA=0,lenB=0;
        while(p!=NULL){
                lenA++;
                p=p->next;
        }
        while(q!=NULL){
                lenB++;
                q=q->next;
        }
        int diff=(lenA>=lenB)?(lenA-lenB):(lenB-lenA);
        p=headA;
        q=headB;
        int count=0;
        while(count!=diff){
                if(lenA>lenB)p=p->next;
                else q=q->next;
                count++;
        }
        while(p!=NULL){
                if(p==q) return p;
                p=p->next;
                q=q->next;
        }
        return NULL;
}