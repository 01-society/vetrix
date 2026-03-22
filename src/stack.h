#pragma once

#ifndef STACK_H
#define STACK_H

#include <stdlib.h>

typedef struct {
    void **items;
    size_t size;
    size_t capacity;
} Stack;

Stack * create_stack(size_t capacity);
void push(Stack *stack, void *item);
void *pop(Stack *stack);
void free_stack(Stack *stack);
int is_empty(Stack *stack);
void * peek(Stack *stack);

void print_stack(Stack *stack);

#endif
