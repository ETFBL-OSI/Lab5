#include <stdio.h>

int oduzimanje(int a,int b)
{
    return printf("%d",a-b);
}

int main()
{
    int x,y;
    scanf("%d",&x);
    scanf("%d",&y);
    oduzimanje(x,y);
    return 0;
}
