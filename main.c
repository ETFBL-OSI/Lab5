#include <stdio.h>

int sabiranje_n_brojeva(int n,int niz[])
{
    int rezultat=0;
    for(int i=0;i<n;i++)
    {
        rezultat+=niz[i];
    }
    return rezultat;
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
    return 0;
}
