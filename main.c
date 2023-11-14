#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int kvadratni_korijen(int a, int b)
{
    return sqrt(a,b);
}

int mnozenje()
{
    int a, b;
    printf("a=");
    scanf("%d", &a);
    printf("b=");
    scanf("%d", &b);
    return a * b;
}
int main()
{

    printf("Hello world!\n");
    printf("Prozivod dva broja: %d", mnozenje());

    printf("%d", kvadratni_korijen(2, 2));

    return 0;
}
