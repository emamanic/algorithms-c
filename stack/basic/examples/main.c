#include <stdio.h>
#include "stack.h"

int main(int argc, char *arg[]) {
    struct stack *pt = newStack(5);

    push(pt, 2);
    push(pt, 4);
    push(pt, 5);

    printf("Top element is %d\n", peek(pt));
    printf("Size of stack is %d\n", size(pt));

    pop(pt);
    pop(pt);
    pop(pt);

    if (isEmpty(pt)) {
        printf("Stack is empty\n");
    } else {
        printf("Stack is not empty\n");
    }

    return 0;
}

