#include "myfunc.h"
#include <math.h>

struct roots uravn(double a, double b, double c)
{
    struct roots root;
    double d = sqrt(b * b - 4 * a * c);
    root.x1 = (-b - d) / 2 / a;
    root.x2 = (-b + d) / 2 / a;
    
    return root;
}
