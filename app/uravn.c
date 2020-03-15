#include "myfunc.h"
#include <math.h>

struct roots uravn(double a, double b, double c)
{
    struct roots root = {0, 0, 0, 0};
    
    // Проверяем на квадратное уравнение
    if (a == 0) {
	return root;
    }
    root.quadratic_equation = 1;
    
    // Получаем дискриминант
    double D = b * b - 4 * a * c;

    // Проверяем дискриминант
    if (D < 0) {
	root.discriminant--;
	return root;
    }
    if (D > 0) root.discriminant = 1;

    // Получаем корни
    D = sqrt(D);
    root.x1 = (-b + D) / 2 / a;    
    root.x2 = (-b - D) / 2 / a;
    
    return root;
}
