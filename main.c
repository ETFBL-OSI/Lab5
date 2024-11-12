#include <stdio.h>

int zbir2Broja(int a, int b)
{
    return a + b;
}
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int rez;
    rez = zbir2Broja(a, b);
    printf("rezultat je: %d", rez);
    return 0;
}
