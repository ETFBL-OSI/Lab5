#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int kvadratni_korijen(int a, int b)
{
    return sqrt(a,b);
}

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


    printf("%d", kvadratni_korijen(2, 2));

    return 0;
}
