#include <stdio.h>

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
    return 0;
}
