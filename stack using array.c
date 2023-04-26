#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 10

struct stack {
    int top;
    int arr[MAX_SIZE];
};

void init(struct stack *s) {
    s->top = -1;
}

int isEmpty(struct stack *s) {
    return (s->top == -1);
}

int isFull(struct stack *s) {
    return (s->top == MAX_SIZE - 1);
}

void push(struct stack *s, int x) {
    if (isFull(s)) {
        printf("Stack Overflow\n");
        return;
    }
    s->arr[++s->top] = x;
}

int pop(struct stack *s) {
    if (isEmpty(s)) {
        printf("Stack Underflow\n");
        return -1;
    }
    return s->arr[s->top--];
}

int peek(struct stack *s) {
    if (isEmpty(s)) {
        printf("Stack is Empty\n");
        return -1;
    }
    return s->arr[s->top];
}

int main() {
    struct stack s;
    init(&s);
    push(&s, 10);
    push(&s, 20);
    push(&s, 30);
    printf("%d\n", pop(&s)); // Output: 30
    printf("%d\n", peek(&s)); // Output: 20
    printf("%d\n", pop(&s)); // Output: 20
    printf("%d\n", pop(&s)); // Output: 10
    printf("%d\n", pop(&s)); // Output: Stack Underflow
    return 0;
}
