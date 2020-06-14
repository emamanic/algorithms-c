#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

struct stack *newStack(int capacity) {
    struct stack *pt = (struct stack*) malloc(sizeof(struct stack));
    pt->maxsize = capacity;
    pt->top = -1;
    pt->items = (int *) malloc(sizeof(int) * capacity);

    return pt;
}

int size(struct stack *pt) {
    return pt->top + 1;
}

int isEmpty(struct stack *pt) {
    return pt->top == -1;
}

int isFull(struct stack *pt) {
    return (pt->top + 1) == pt->maxsize;
}

void push(struct stack *pt, int item) {
    if (isFull(pt)) {
        printf("Overflow\nProgram Terminated\n");
        exit(EXIT_FAILURE);
    } else {
        pt->items[++pt->top] = item;
    }
}

int peek(struct stack *pt) {
    if (!isEmpty(pt)) {
        return pt->items[pt->top];
    } else {
        exit(EXIT_FAILURE);
    }
}

int pop(struct stack *pt) {
    if (isEmpty(pt)) {
        printf("Underflow\nProgram Terminated\n");
        exit(EXIT_FAILURE);
    } else {
        return pt->items[pt->top--];
    }
}

