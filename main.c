#include <stdio.h>
#include <stdlib.h>
#include <math.h>


float kvadratni_korijen(int a)
{
    return sqrt(a);
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
    double c, d;

    printf("%lf", kvadratni_korijen(2));
    
    printf("%d", oduzimanje_dva_br(a, b));

    printf("Prozivod dva broja: %d", mnozenje());

    

    scanf("%lf %lf", &a, &b);

    printf("Kolicnik je: %lf", dijeljenjeDvaBroja(c,d));

    return 0;
}

