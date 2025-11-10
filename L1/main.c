#include<stdio.h>

void djeljenje(double a, double b)
{
    printf("%lf / %lf = %lf",a,b,a/b);
}

void sum_of_two() {
    double a, b;

    printf("a = ");
    scanf("%lf", &a);

    printf("b = ");
    scanf("%lf", &b);

    printf("a + b = %lf", a + b);
}

int faktorijel(int n)
{
    int i,rezultat=1;

    for(i=1;i<=n;i++){
        rezultat*=i;
    }
    return rezultat;
}

void Mnozenje_N_Brojeva() {
    int n;
    printf("Koliko brojeva zelite unijeti: ");
    scanf("%d", n);
    double proizvod = 1;
    double tren;
    for (int i = 0; i < n; i++)
    {
        printf("Unesite broj: ");
        scanf("%lf", tren);
        proizvod *= tren;
    }
    printf("Proizvod unijetih = %lf", &proizvod);
}

void proizvod_2_broja()
{
    double a, b;
    printf("a = ");
    scanf("%lf", &a);

    printf("b = ");
    scanf("%lf", &b);
    printf("a*b = %lf", a*b);
}

