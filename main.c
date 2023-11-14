#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double kvadratni_korijen(int a, int b)
{
    return sqrt(a,b);
}

int mnozenje()
{
    int a, b;
    printf("a=");
    scanf("%d", &a);
    printf("b=");
    scanf("%d", &b);
    return a * b;
}


double dijeljenjeDvaBroja (double a, double b)
{
    if (b==0)
        return;
    else
        return a/b;
}

int oduzimanje_dva_br(int a, int b){
    printf("Unesite prvi broj:" ); scanf("%d", &a);
    printf("Unesite drugi broj:" ); scanf("%d", &b);
   return a - b;
}

int main()
{

    int a, b;
   printf("%d", oduzimanje_dva_br(a, b));

printf("Hello world!\n");
    printf("Prozivod dva broja: %d", mnozenje());

    double a, b;

    scanf("%lf %lf", &a, &b);

    printf("Kolicnik je: %lf", dijeljenjeDvaBroja(a,b));


    printf("%d", kvadratni_korijen(2, 2));

    return 0;
}
