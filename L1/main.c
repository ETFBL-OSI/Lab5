#include <stdio.h>

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
