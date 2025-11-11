
void najveci_broj(){
    int n;
    int max=0;
    int br;
    printf("Br brojeva:");
    scanf("%d",&n);
    printf("Brojevi:\n");
    for(int i=0;i<n;i++){
        printf("%d broj je",i+1);
        scanf("%d",&br);
        if(br>max)max=br;
    }
    printf("Najveci broj je %d",max);


#include <stdio.h>

int faktorijel()
{
    int f=1;
    for(int i=1; i<=5; i++)
    {
        f*=i;
    }
    return f;

int mnozenje()
{
    int a=5, b=3;
    int proizvod = a*b;

    return proizvod;
}

double procenat()
{
	return (1.00 / 5.00) * 100.00;

}
