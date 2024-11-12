
#include<stdio.h>
int oduzimanje_prvih_n_brojeva(int n)
float mnozenjeNBrojeva(int n,float *niz)
{
    float rez=1;
   for(int i=0;i<n;i++)
    {
        rez=rez*niz[i];
    }
    printf("Rezultat:%.2f",rez);
}
int main()
{
    int n;
    printf("Unesite koliko brojeva zelite da pomnozite:");
    scanf("%d",&n);
    float* niz=(float*)malloc(sizeof(float)*n);
    for(int i=0;i<n;i++)
        {
            printf("\nUnesite %d. broj:",i+1);
            scanf("%f",&niz[i]);
        }
   