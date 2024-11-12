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

<<<<<<< HEAD
int oduzimanje(int broj1, int broj2)
{
    int rez=broj1-broj2;
    return rez;
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
>>>>>>> f00775b80480f283211bf1bc1c8c3eecbff60ad7
}

int main()
{
<<<<<<< HEAD
    int broj1, broj2;
    printf("unesi 1.broj: ");
    scanf("%d", &broj1);
    printf("unesi 2.broj: ");
    scanf("%d", &broj2);
    if(broj1>broj2)
    {
    printf ("%d",oduzimanje(broj1, broj2));
    }
    else
        printf("greska");


=======
    dijeljenjeDvaBroja(7,5);
>>>>>>> 31272660931456dc87816bbb830b0c44db44cac1
>>>>>>> f00775b80480f283211bf1bc1c8c3eecbff60ad7
    return 0;
}
