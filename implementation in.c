#include <stdio.h>
#define MAX_SIZE 100 // maximum size of stack

int stack[MAX_SIZE];
int top = -1; // initialize top index as -1

void push(int item) {
   if (top >= MAX_SIZE - 1) {
      printf("Stack Overflow\n");
      return;
   }
   top++;
   stack[top] = item;
}

int pop() {
   if (top == -1) {
      printf("Stack Underflow\n");
      return -1;
   }
   int item = stack[top];
   top--;
   return item;
}

int main() {
   push(1);
   push(2);
   push(3);
   printf("%d popped from stack\n", pop());
   printf("%d popped from stack\n", pop());
   printf("%d popped from stack\n", pop());
   printf("%d popped from stack\n", pop());
   return 0;
}

