

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

int zbirkvadratabrojeva()
{
    int n=10;
    int s=0;
    for(int i=1;i<=n;i++)
    {
        s+=i*i;
    }

int korijen_broja()
{
    double broj;
    printf("unesite broj:");
    scanf("%lf",&broj);

    double rez;
    rez=sqrt(broj);


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


#include<stdio.h>

int oduzimanje_dva_broja()
{
    int n = 5;
    int m = 10;
    printf("\nm = %d, n = %d\nrazlika je %d",m,n,m-n);
    return m-n;

}
