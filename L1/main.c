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




void kvadratnikorijen()
{
    double a,korijen;
    printf("a=");
    scanf ("%lf", &a);
    korijen=sqrt(a);
    printf ("Kvadratni korijen broja a je: %lf", korijen);
}

void razlika_dva_broja() {
    double a, b;


void sabiranje_n_brojeva()
{
    int n;
    printf("Unesite broj n: ");
    scanf("%d", &n);

    int zbir=0;
    for(int i=1;i<n;i++)
    {
        zbir = zbir + i;
    }
    printf("Zbir: %d", zbir);


}

int faktorijel(int n)
{
    int i,rezultat=1;


    for(i=1;i<=n;i++){
        rezultat*=i;
    }
    return rezultat;
}

void mnozenjeNBrojeva() {
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


void stepenovanje()
{
    printf("Unesite broj: ");
    scanf("%d", &br);

    printf("Unesite stepen: ");
    scanf("%d", &s);
    printf("%d^%d = ", br, s, pow(br, s));
};
