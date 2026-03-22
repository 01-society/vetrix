
#include "expression_tree.h"
#include <stdlib.h>


ExpressionTree * create_tree(){
    ExpressionTree * tree = (ExpressionTree*)malloc(sizeof(ExpressionTree));
    if (tree == NULL ) return NULL;
    tree->height = 0;
    tree->left = NULL;
    tree->right = NULL ;
    tree->child = NULL;
    return  tree;
}



BracketExpression * create_bracket_expression(size_t end){
    BracketExpression * expression = (BracketExpression *) malloc(sizeof(BracketExpression));
    if(expression == NULL ) return NULL ;
    expression->start = -1;
    expression->end = end;
    return expression;
}
