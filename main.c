#include <stdio.h>
#include <stdlib.h>

int oduzimanje_dva_br(int a, int b){
    printf("Unesite prvi broj:" ); scanf("%d", &a);
    printf("Unesite drugi broj:" ); scanf("%d", &b);
   return a - b;
}

int main()
{
    int a, b;
   printf("%d", oduzimanje_dva_br(a, b));
    return 0;
}
