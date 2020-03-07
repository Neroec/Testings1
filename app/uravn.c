#include "myfunc.h"
#include <math.h>

int *uravn(double a, double b, double c) {

    int x[2];
    int *f = x;
    double d = sqrt(b * b - 4 * a * c);
    x[0] = (-b - d) / 2 / a;
    x[1] = (-b + d) / 2 / a;
    
    return f;
}
