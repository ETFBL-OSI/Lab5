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