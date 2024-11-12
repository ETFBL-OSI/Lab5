#include <stdio.h>
<<<<<<< HEAD
#include <stdlib.h>
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
    mnozenjeNBrojeva(n,niz);
=======

double dijeljenjeDvaBroja(double a, double b)
{
    if(b==0)
    {
        printf("Greska!Dijeljenje sa 0.");
        return 0;
    }
        printf("%lf",a/b);
    return a/b;
}

int main()
{
    dijeljenjeDvaBroja(7,5);
>>>>>>> 31272660931456dc87816bbb830b0c44db44cac1
    return 0;
}
