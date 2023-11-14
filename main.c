#include <stdio.h>
#include <stdlib.h>

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
    return 0;
}
