#ifndef MYFUNC_H
#define MYFUNC_H

struct roots {
    double x1;
    double x2;
    int quadratic_equation;
    int discriminant;
};

int myfunc(int b);

int fibonachi(int num);

struct roots uravn(double a, double b, double c);

#endif // MYFUNC_H
