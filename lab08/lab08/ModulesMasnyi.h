#ifndef MODULESMASNYI_H_INCLUDED
#define MODULESMASNYI_H_INCLUDED
#define _USE_MATH_DEFINES
#include <iostream>
#include <math.h>


#endif // MODULESMASNYI_H_INCLUDED
double s_calculation(int x, int y, int z)
{
    double S = x * x - y * y * y + sqrt(z * z * pow(M_E, x) / (12 * x + (y * y - M_PI * sqrt(z))));
    return S;
}
