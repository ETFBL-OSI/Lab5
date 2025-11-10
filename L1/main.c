#include <stdio.h>

int faktorijel(int n)
{
    int i,rezultat=1;

    for(i=1;i<=n;i++){
        rezultat*=i;
    }
    return rezultat;
}
