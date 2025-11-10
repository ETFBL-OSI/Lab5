#include <stdio.h>


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
    return 0;

}
