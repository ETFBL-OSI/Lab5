#include<stdio.h>

void djeljenje()
{
    printf("a = ");
    scanf("%lf", &a);

    printf("b = ");
    scanf("%lf", &b);

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

<<<<<<< HEAD
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
=======
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

int stepenovanje(int br, int s)
{
    return pow(br, s);
};
