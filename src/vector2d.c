
#include <math.h>
#include <stdio.h>
#include "vector2d.h"

// Simple implementation of vector addition
Vector2D add_vector2D(Vector2D * vec1 , Vector2D * vec2){
    Vector2D vec = {
        .x = vec1->x + vec2->x,
        .y= vec1->y + vec2->y
    };

    return vec;
}


// Simple implementation of vector subtraction
Vector2D sub_vector2D(Vector2D * vec1 , Vector2D * vec2){
    Vector2D vec = {
        .x = vec1->x - vec2->x,
        .y= vec1->y - vec2->y
    };

    return vec;
}


// Find outs the scaler of the vector
Vector2D scale_vector2D(double scaler , Vector2D * vec) {
    Vector2D vec_result = {
        .x = vec->x * scaler,
        .y = vec->y * scaler,
    };
    return  vec_result;
}

// 2D dot product of 2 vectors
Vector2D dot_product2D(Vector2D * vec1 , Vector2D * vec2){
    Vector2D vec = {
        .x = vec1->x * vec2->x,
        .y= vec1->y * vec2->y
    };

    return vec;
}


// 2D linear transformation of vector
Vector2D transform_vector2D(Transformation2D *transform , Vector2D vec){
    Vector2D vec_result  = {
        .x = (transform->vec1.x * vec.x ) + (transform->vec2.x * vec.y),
        .y = (transform->vec1.y * vec.x) + ( transform->vec2.y * vec.y )
    };
    return  vec_result;
};



// Figure out the magnitude of 2D vector
double magnitude2D(Vector2D vec){
    double result = sqrt((vec.x * vec.x)+ (vec.y * vec.y)) ;
    return  result;
}


// Find outs the unit vector at direction of vec
Vector2D unit_vector2D(Vector2D vec){

    double magnitude = magnitude2D(vec);
    if(magnitude == 0 ) return ZeroVector ;

    return scale_vector2D(1/magnitude, &vec);

}

void print_vector(Vector2D vec){
    printf("%lfi+%lfj", vec.x , vec.y);
}
