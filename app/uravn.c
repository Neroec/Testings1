#include "myfunc.h"
#include <math.h>

double *uravn(double a, double b, double c) {

    double x[2];
    double *f = x;
    double d = sqrt(b * b - 4 * a * c);
    x[0] = (-b - d) / 2 / a;
    x[1] = (-b + d) / 2 / a;
    
    return f;
}
