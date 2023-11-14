#include <stdio.h>
#include <stdlib.h>

double dijeljenjeDvaBroja (double a, double b)
{
    if (b==0)
        return;
    else
        return a/b;
}

int main()
{
    double a, b;

    scanf("%lf %lf", &a, &b);

    printf("Kolicnik je: %lf", dijeljenjeDvaBroja(a,b));

    return 0;
}
