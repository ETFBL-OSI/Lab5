#include <stdio.h>


int sabiranje_n_brojeva()
{
	int suma=0,n;
	printf("Koliko brojeva sabirate:");
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		int broj;
		printf("Unesite %d. broj:");
		scanf("%d", &broj);
		suma += broj;
	}
	return suma;
}

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
}

