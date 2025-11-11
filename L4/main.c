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
    int a, b;

    printf("Unesi a: ");
    scanf("%d\n");

    printf("Unesi b: ");
    scanf("%d\n");

    int proizvod = a*b;

    return proizvod;
}

double procenat()
{
	return (1.00 / 5.00) * 100.00;
}

