#include "stdio.h"

int mul(int a, int b) {
int  c;
printf("Unesite broj a:");
scanf("%d", &a);
printf("Unesite broj b:");
scanf("%d", &b);
c = a * b;
printf("Rezultat: %d", c);
return c;
}

int main() {

int a,b;
mul(a,b);

return 0;

}
