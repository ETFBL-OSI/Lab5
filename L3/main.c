
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



int oduzimanje(int a,int b)
{
    return printf("%d",a-b);
}



int sum(int a,int b){
    return printf("%d",a+b);
}

int main(){
    int a, b;
    printf("Unesi a i b: ");
    scanf("%d",&a);
    scanf("%d",&b);

    sum(a,b);
    printf("\n");
    oduzimanje(a,b);
    printf("\n");
    mul(a,b);
    return 0;



}
