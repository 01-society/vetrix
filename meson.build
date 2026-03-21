
project('calculator' ,'c')

vector2d = library('vector2d', 'src/vector2d.h', 'src/vector2d.c', link_args: ['-lm'], )

executable('calculator', 'src/main.c' ,   link_with: vector2d,)
