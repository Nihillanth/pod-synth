#ifndef STACK_H
#define STACK_H

typedef struct Stack {
    double *data;
    int size;
    int capacity;
};

void stack_init(Stack *stack);

void stack_free(Stack *stack);

void stack_push(Stack *stack, double value);

double stack_pop(Stack *stack);

double stack_peek(const Stack *stack);

int stack_is_empty(const Stack *stack);

#endif
