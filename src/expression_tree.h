#pragma once


#ifndef EXPRESSION_TREE_H
#define EXPRESSION_TREE_H

#include <stddef.h>

typedef enum ExpressionChildType {
    CONST,
    IDENTIFIER,
} ExpressionChildType;

typedef enum BracketType {
    PARENTHESIS,
    BRACKET,
    BRACE,
} BracketType;

typedef struct ExpressionTree{
    int height;
    struct ExpressionTree * left;
    struct ExpressionTree * right;
    ExpressionChildType child_type;
    void * child;
} ExpressionTree;

typedef struct  {
    size_t start;
    size_t end;
    BracketType type;
} BracketExpression;


ExpressionTree * create_tree();

BracketExpression * create_bracket_expression(size_t end);

#endif
