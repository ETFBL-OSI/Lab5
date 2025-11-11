#include <stdio.h>

int faktorijel()
{
    int f=1;
    for(int i=1; i<=5; i++)
    {
        f*=i;
    }
    return f;
}
int mnozenje()
{
    int a=5, b=3;
    int proizvod = a*b;

    return proizvod;
}

double procenat()
{
	return (1.00 / 5.00) * 100.00;
}

int main()
{
    printf("%d\n",faktorijel());
    printf("%d\n",mnozenje());
    printf("%lf\n",procenat());
    return 0;
}
