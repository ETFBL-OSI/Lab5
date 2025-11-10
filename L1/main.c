#include <stdio.h>

void sum_of_two() {
    double a, b;

    printf("a = ");
    scanf("%lf", &a);

    printf("b = ");
    scanf("%lf", &b);

    printf("a + b = %lf", a + b);
}

void kvadratnikorijen()
{
    double a,korijen;
    printf("a=");
    scanf ("%lf", &a);
    korijen=sqrt(a);
    printf ("Kvadratni korijen broja a je: %lf", korijen);
}
