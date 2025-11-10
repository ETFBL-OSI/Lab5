#include <stdio.h>
#include <stdlib.h>

int sum(a, b){
    return a+b;
}


int main(){
    int a, b;
    printf("Unesi a i b: ");
    scanf("%d, %d", &a, &b);

    sum(a,b);

    return;
}
