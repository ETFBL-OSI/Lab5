#include <stdio.h>

int oduzimanje(int broj1, int broj2)
{
    int rez=broj1-broj2;
    return rez;
}

int main()
{
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


    return 0;
}
