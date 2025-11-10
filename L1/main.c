#include<stdio.h>

void djeljenje_dva_broja()
{
    double a, b;
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

    printf("a = ");
    scanf("%lf", &a);

    printf("b = ");
    scanf("%lf", &b);

    printf("a - b = %lf", a - b);
}

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

void faktorijel()
{
    int n;
    int i,rezultat=1;
    printf("Za koji broj racunamo faktorijel: ");
    scanf("%d", &n);

    for(i=1;i<=n;i++){
        rezultat*=i;
    }
    printf("%d! = %d", n, rezultat);
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
    printf("%d^%d = %d", br, s, pow(br, s));
}

int oduzimanje()
{
    int a,b,razlika;
    printf("Unesite dva broja:\n");
    scanf("%d %d", &a, &b);
    razlika = a - b;
    printf("Razlika brojeva %d i %d je: %d.", a, b, razlika);
}

int main(void) {
	printf("##########################\n");
	printf("##    ETF Kalkulator    ##\n");
	printf("##########################\n");
	printf("\n");
	printf("##########################\n");
	printf("##  1. Saberi 2 broja   ##\n");
	printf("##  2. Saberi N brojeva ##\n");
	printf("##  3. Oduzmi 2 broja   ##\n");
	printf("##  4. Oduzmi N brojeva ##\n");
	printf("##  5. Mnozi 2 broja    ##\n");
	printf("##  6. Mnozi N brojeva  ##\n");
	printf("##  7. Dijeli 2 broja   ##\n");
	printf("##  8. Faktorijel       ##\n");
	printf("##  9. Korijen          ##\n");
	printf("## 10. Stepen           ##\n");
	printf("## 11. Ostatak          ##\n");
	printf("## 12. Srednja vrije... ##\n");
	printf("## 13. Najveci          ##\n");
	printf("## 14. Najmanji         ##\n");
	printf("## 15. Suma prvih N     ##\n");
	printf("## 16. Suma kv. prvih N ##\n");
	printf("## 17. Procenat         ##\n");
	printf("##########################\n");
	
	int choice;
	do {
		printf("  > ");
		scanf("%d", &choice);
	} while (!(1 <= choice && choice <= 17));
	
	switch (choice) {
		case 1: sum_of_two(); break;
		case 2: sabiranje_n_brojeva(); break;
		case 3: razlika_dva_broja(); break;
		default: printf("Nije implementirano!"); break;
	}
}