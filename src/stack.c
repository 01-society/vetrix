#include "stack.h"
#include <stdio.h>

Stack * create_stack(size_t capacity) {
    Stack *stack = malloc(sizeof(Stack));
    stack->items = malloc(capacity * sizeof(void *));
    stack->size = 0;
    stack->capacity = capacity;
    return stack;
}

void push(Stack *stack, void *item) {
    if (stack->size == stack->capacity) {
        stack->capacity *= 2;
        stack->items = realloc(stack->items, stack->capacity * sizeof(void *));
    }
    stack->items[stack->size++] = item;
}

void *pop(Stack *stack) {
    if (stack->size == 0) return NULL;
    return stack->items[--stack->size];
}

void free_stack(Stack *stack) {
    free(stack->items);
    free(stack);
}

int is_empty(Stack *stack) {
    return stack->size == 0;
}

void *peek(Stack *stack) {
    if (stack->size == 0) return NULL;
    return stack->items[stack->size - 1];
}

void print_stack(Stack *stack) {
    for (size_t i = 0; i < stack->size; i++) {
        printf("%p ", stack->items[i]);
    }
    printf("\n");
}
