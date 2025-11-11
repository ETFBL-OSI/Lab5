
#include <stdio.h>
#include <math.h>
double stpenovanje()
{
    double baza=3.0;
    int eksponent=2;
    double rezultat=1.0;
    for(int i=0;i<eksponent;i++)
    {
        rezultat*=baza;
    }
    return rezultat;




int sabiranje_n_brojeva()
{
	int suma=0,n;
	printf("Koliko brojeva sabirate:");
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		int broj;
		printf("Unesite %d. broj:");
		scanf("%d", &broj);
		suma += broj;
	}
	return suma;
}


double srednjaVr() {
    int n;
    double br[n], zbir = 0.0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%lf", br[i]);
        zbir += br[i];
    }
    return zbir / n;
    return zbir/n;

}


void najveci_broj(){
    int n;
    int max=0;
    int br;
    printf("Br brojeva:");
    scanf("%d",&n);
    printf("Brojevi:\n");
    for(int i=0;i<n;i++){
        printf("%d broj je",i+1);
        scanf("%d",&br);
        if(br>max)max=br;
    }
    printf("Najveci broj je %d",max);
}

int zbirkvadratabrojeva()
{
    int n=10;
    int s=0;
    for(int i=1;i<=n;i++)
    {
        s+=i*i;
    }

    return s;


int korijen_broja()
{
    double broj;
    printf("unesite broj:");
    scanf("%lf",&broj);

    double rez;
    rez=sqrt(broj);

}

int faktorijel()
{
    int f=1;
    for(int i=1; i<=5; i++)
    {
        f*=i;
    }
    return f;
}

int mnozenje_dva_broja()
{
    int a=5, b=3;
    int proizvod = a*b;

    return proizvod;
}

double procenat()
{
	return (1.00 / 5.00) * 100.00;
}

int oduzimanje_dva_broja()
{
    int f=1;
    for(int i=1; i<=5; i++)
    {
        f*=i;
    }
    return f;


int mnozenje()
{
    int a=5, b=3;
    int proizvod = a*b;

    return proizvod;
}

double procenat()
{
    int a = 20;
    int p = 5;
    return (p / 100.00) * a;
    int n = 5;
    int m = 10;
    printf("\nm = %d, n = %d\nrazlika je %d",m,n,m-n);
    return m-n;

}


int main()
{
    printf("%d\n",faktorijel());
    printf("%d\n",mnozenje());
    printf("%lf\n",procenat());
    return 0;
}

double srednjaVr(){
    int n;
    double br[n], zbir=0.0;
    scanf("%d", &n);
    for(int i=0; i<n; i++) {
        scanf("%lf", br[i]);
        zbir+=br[i];
    }
    return (double)zbir/n;
}

