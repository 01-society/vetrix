
project('calculator' ,'c')

vector2d = library('vector2d', 'src/vector2d.h', 'src/vector2d.c', link_args: ['-lm'], )
expression_2d = library('expression_tree' , 'src/expression_tree.h' , 'src/expression_tree.c')
stack = library('stack', 'src/stack.h' , 'src/stack.c')

executable('calculator', 'src/main.c' ,   link_with: [vector2d, expression_2d , stack],)
