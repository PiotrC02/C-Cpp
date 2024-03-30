#include <stdio.h>
#include <stdlib.h>
#include "triangle.c"

int main()
{
    // podanie wspolrzednych punktow przez uzytkownika i zapisanie ich do programu
    Point_t points[3];
    for(int i=0; i<3; i++)
    {
        printf("Podaj %i x: ", i);
        scanf("%lf", &(points[i].x));
        printf("Podaj %i y: ", i);
        scanf("%lf", &(points[i].y));
    }

    // odpowiedz na pytanie czy trojkat jest prostokatny
    if (isRightTriangle(points))
    {
        printf("Trojkat jest prostokatny.");
    }
    else
    {
        printf("Trojkat nie jest prostokatny.");
    }
}
