#include <math.h>
#include "triangle.h"

// definicja funkcji
bool isRightTriangle(Point_t points[])
{
    // punkt A
    Point_t A = points[0];

    // punkt B
    Point_t B = points[1];

    // punkt C
    Point_t C = points[2];

    // obliczenie dlugosci boku a
    double a = sqrt(pow((B.x - A.x), 2) + pow((B.y - A.y), 2));

    // obliczenie dlugosci boku b
    double b = sqrt(pow((C.x - B.x), 2) + pow((C.y - B.y), 2));

    // obliczenie dlugosci boku c
    double c = sqrt(pow((C.x - A.x), 2) + pow((C.y - A.y), 2));

    // pitagoras a^2+b^2=c^2, czy 2 boki sa rowne 3 bokowi -> sprawdzenie czy trojkat jest prostokatny
    if (pow(a,2) + pow(b,2) == pow(c,2) || pow(a,2) + pow(c,2) == pow(b,2) || pow(b,2) + pow(c,2) == pow(a,2))
    {
        return true;
    }
    else
    {
        return false;
    }
}
