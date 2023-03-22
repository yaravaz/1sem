#include <iostream>
#include <stdio.h>

void main()
{
    setlocale(LC_CTYPE, "Russian");
    double s, t, x, j, y;
    printf("¬ведите 3 числа");
    scanf_s("% f, % f, % f", &x, &j, &y);
    s = 0.4 * x - 1 / tan(y);
    t = s - sin(s);
    printf("s=");
    printf("% f", s);
    printf("t=");
    printf("% f", t);
}