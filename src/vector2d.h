#pragma once
#ifndef VECTOR_2D


// Simple implementation of vector 2D
typedef struct Vector2D{
    double x;
    double y;
} Vector2D;


typedef struct Transformation2D {
    Vector2D vec1 ;
    Vector2D vec2 ;
} Transformation2D;


const Vector2D ZeroVector = {0,0};
const Vector2D UnitVectorX = {1,0};
const Vector2D UnitVectorY = { 0, 1};

Vector2D add_vector2D(Vector2D * vec1 , Vector2D * vec2);
Vector2D sub_vector2D(Vector2D * vec1 , Vector2D * vec2);
Vector2D scale_vector2D(double scaler , Vector2D * vec);
Vector2D dot_product2D(Vector2D * vec1 , Vector2D * vec2);
Vector2D transform_vector2D(Transformation2D *transform , Vector2D vec);
double magnitude2D(Vector2D vec);
Vector2D unit_vector2D(Vector2D vec);

void print_vector(Vector2D vec);


#endif
