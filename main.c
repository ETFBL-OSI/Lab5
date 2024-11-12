#include <stdio.h>
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


int sabiranje_n_brojeva(int n,int niz[])
{
    int rezultat=0;
    for(int i=0;i<n;i++)
    {
        rezultat+=niz[i];
    }
    return rezultat;
}
int zbir2Broja(int a, int b)
{
    return a + b;
}


int oduzimanje(int broj1, int broj2)
{
    int rez=broj1-broj2;
    return rez;

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

    int n1;
    do
    {
        printf("Unesi broj: ");
        scanf("%d",&n1);
    }while(n1<2);

    int niz[n1];
    for(int i=0;i<n1;i++)
    {
        printf("Unesi %d. broj: ",i+1);
        scanf("%d",&niz[i]);
    }
    int rezultat=sabiranje_n_brojeva(n1,niz);
    printf("\nRezultat je: %d",rezultat);

    int n;
    printf("Unesite koliko brojeva zelite da pomnozite:");
    scanf("%d", &n);
    float* niz = (float*)malloc(sizeof(float) * n);
    for (int i = 0; i < n; i++)
    {
        printf("\nUnesite %d. broj:", i + 1);
        scanf("%f", &niz[i]);
    }
    mnozenjeNBrojeva(n, niz);

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

    int a, b;
    scanf("%d %d", &a, &b);
    int rez;
    rez = zbir2Broja(a, b);
    printf("rezultat je: %d", rez);

    dijeljenjeDvaBroja(7,5);


    return 0;
}
