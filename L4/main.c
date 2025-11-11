<<<<<<< HEAD
int korijen_broja()
{
    double broj;
    printf("unesite broj:");
    scanf("%lf",&broj);

    double rez;
    rez=sqrt(broj);
    printf("korijen broja je: %lf", korijen);
    return 0;
=======
#include <stdio.h>

int faktorijel()
{
    int f=1;
    for(int i=1; i<=5; i++)
    {
        f*=i;
    }
    return f;

int mnozenje()
{
    int a=5, b=3;
    int proizvod = a*b;

    return proizvod;
}

double procenat()
{
	return (1.00 / 5.00) * 100.00;
>>>>>>> 7d7b329ff6a5ec6cc4dc81c0ed56ac52b9110e68
}
