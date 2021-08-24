#include <stddef.h>
#include <stdbool.h>

typedef struct {
    int size;
    int *M;
} MyStack;

/** Initialize your data structure here. */

MyStack* myStackCreate() {
    MyStack *out = (MyStack*) malloc(sizeof(MyStack));
    out->size = 0;
    out->M = NULL;
    return out;
}

/** Push element x onto stack. */
void myStackPush(MyStack* obj, int x) {
    obj->size++;
    obj->M = (MyStack*) realloc(obj->M, obj->size*sizeof(MyStack));
    obj->M[obj->size - 1] = x;
}

/** Removes the element on top of the stack and returns that element. */
int myStackPop(MyStack* obj) {
    int k = obj->M[obj->size - 1];
    obj->size--;
    obj->M = (MyStack*) realloc(obj->M, obj->size*sizeof(MyStack));
    return k;
}

/** Get the top element. */
int myStackTop(MyStack* obj) {
    return obj->M[obj->size - 1];
}

/** Returns whether the stack is empty. */
bool myStackEmpty(MyStack* obj) {
    return (obj->size) ? false : true;
}

void myStackFree(MyStack* obj) {
    free(obj->M);
    free(obj);
}