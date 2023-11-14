#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int kvadratni_korijen(int a, int b)
{
    return sqrt(a,b);
}

int main()
{
    printf("%d", kvadratni_korijen(2, 2));
    return 0;
}
