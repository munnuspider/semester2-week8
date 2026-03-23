
#include <stdio.h>
#include <stdbool.h>

#include "shapes.h"

int main( void ) {

    Point p1 = makePoint(3.0, 4.0);
    printf("Point created at: (%.1f, %.1f)\n", p1.x, p1.y)
    // test your code by calling the functions and printing the output 
    return 0;
}