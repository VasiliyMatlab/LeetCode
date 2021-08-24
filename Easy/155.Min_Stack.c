#include <stddef.h>

typedef struct {
    int n;
    int *M;
} MinStack;

MinStack* minStackCreate() {
    MinStack *out = (MinStack*) malloc(sizeof(MinStack));
    out->n = 0;
    out->M = NULL;
    return out; 
}

void minStackPush(MinStack* obj, int val) {
    if (!obj->n) {
        obj->n++;
        obj->M = (int*) malloc(sizeof(int));
        obj->M[0] = val;
        return;
    }
    obj->n++;
    obj->M = (int*) realloc(obj->M, obj->n*sizeof(int));
    obj->M[obj->n-1] = val;
}

void minStackPop(MinStack* obj) {
    obj->n--;
    obj->M = (int*) realloc(obj->M, obj->n*sizeof(int));  
}

int minStackTop(MinStack* obj) {
    return obj->M[obj->n-1];
}

int minStackGetMin(MinStack* obj) {
    int min = obj->M[0];
    for (int i = 1; i < obj->n; i++) {
        if (min > obj->M[i])
            min = obj->M[i];
    }
    return min;  
}

void minStackFree(MinStack* obj) {
    free(obj->M);
    free(obj);   
}