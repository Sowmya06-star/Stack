#include <stdio.h>
#define MAX_SIZE 100 // maximum size of stack

int stack[MAX_SIZE]; // array to store stack elements
int top = -1; // index of top element in stack, initialized to -1

// function to push an element onto the stack
void push(int element) {
    if (top >= MAX_SIZE - 1) { // check if stack is full
        printf("Stack overflow\n");
        return;
    }
    stack[++top] = element; // increment top and add element to stack
}

// function to pop an element from the stack
int pop() {
    if (top < 0) { // check if stack is empty
        printf("Stack underflow\n");
        return -1; // return -1 to indicate failure
    }
    return stack[top--]; // decrement top and return popped element
}

int main() {
    push(10); // push element 10 onto stack
    push(20); // push element 20 onto stack
    push(30); // push element 30 onto stack

    printf("Popped element: %d\n", pop()); // pop top element (30) from stack and print it
    printf("Popped element: %d\n", pop()); // pop top element (20) from stack and print it
    printf("Popped element: %d\n", pop()); // pop top element (10) from stack and print it

    printf("Popped element: %d\n", pop()); // try to pop from empty stack
    return 0;
}
