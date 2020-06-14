#ifndef __STACK_H__
#define __STACK_H__

struct stack {
    int maxsize;
    int top;
    int *items;
};

struct stack *newStack(int capacity);
int size(struct stack *pt);
int isEmpty(struct stack *pt);
int isFull(struct stack *pt);
void push(struct stack *pt, int item);
int peek(struct stack *pt);
int pop(struct stack *pt);

#endif /* __STACK_H__ */
