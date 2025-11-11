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
    int a = 20;
    int p = 5;
    return (p / 100.00) * a;
}
