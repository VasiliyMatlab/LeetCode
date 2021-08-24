#include <stddef.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode *init(int value){
    struct ListNode *x = malloc(sizeof(struct ListNode));
    x->val = value;
    x->next = NULL;
    return x;
}

void set(struct ListNode *x, int value){
    struct ListNode *tmp = init(0);
    tmp->next = x->next;
    tmp->val = x->val;
    x->val = value;
    x->next = tmp;
}

int get(struct ListNode *x){
    return x->val;
}

int pop(struct ListNode **x){
    int value = get(*x);
    struct ListNode *tmp = (*x)->next;
    free(*x);
    *x = tmp;
    return value;
}

struct ListNode *mergeTwoLists(struct ListNode *l1,struct ListNode *l2){
    struct ListNode *out = NULL;

    if (!l1){
        out = l2;
        return out;
    }
    if (!l2){
        out = l1;
        return out;
    }
    
    int *list1 = NULL;
    int count = 0;
    do{
        count++;
        list1 = (int*) realloc(list1,count*sizeof(int));
        list1[count-1] = pop(&l1);
    } while(l1);
    int size1 = count;

    int *list2 = NULL;
    count = 0;
    do{
        count++;
        list2 = (int*) realloc(list2,count*sizeof(int));
        list2[count-1] = pop(&l2);
    } while(l2);
    int size2 = count;
    int size = size1 + size2;
    int *outlist = malloc(size*sizeof(int));

    int j = 0, k = 0; // j - 1-ый, k - 2-ой
    for (int i = 0; i < size; i++){
        if ((j < size1) && (k < size2)){
            if (list1[j] <= list2[k]){
                outlist[i] = list1[j];
                j++;
            }
            else{
                outlist[i] = list2[k];
                k++;
            }
        }
        else if ((j >= size1) && (k < size2)){
            outlist[i] = list2[k];
            k++;
        }
        else if ((j < size1) && (k >= size2)){
            outlist[i] = list1[j];
            j++;
        }
        else
            printf("Error");
    }

    out = init(outlist[size-1]);
    for (int i = size-2; i >= 0; i--)
        set(out,outlist[i]);
    return out;
}