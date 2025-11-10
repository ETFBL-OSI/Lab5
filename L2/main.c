<<<<<<< HEAD


=======
#include <stdio.h>
#include <stdlib.h>
<<<<<<< HEAD
    int sabiranjeNBrojeva() {
    int suma = 0, a;
    for (int i = 0; i < n; i++) {
        scanf("%d", &a);
        suma += a;
    }
    return suma;
}
 
 int najmanji(int n, int *niz)
 {
    int min = 99999;

    for(int i=0,i<n;i++)
    {
        if(niz[i]<min)
        min = niz[i];
    }

   return min;

 }
>>>>>>> 303d17faa40a3dfc7df0cb1ea177bb5cbdab80fc

int sabiranje_brojeva(){
    int a=2;
    int b=3;
    return a+b;
}

double dijeljenje2broja(double, double);

int OduzimanjeDvaBroja()
{
    int a=1, b=2;
    return b-a;
}
int sumaKvadrata(int a, int b) {
    return a*a + b*b;
}
int racunanjeFaktorijela(int n)
{
    int p=n;
    for(int i=n-1; i>1; i--)
        p*=i;
    return p;
}

//najveci od n brojeva

int max() {
    int niz[3];
    int max = niz[0];
    niz[0] = 2;
    niz[1] = 3;
    niz[2] = 9;
    for (int i = 0; i < 3; i++) {
        if (niz[i] > max)
            max = niz[i];
    }
    return max;
}
int main() {
    printf("Max (12, 17): %d", max(12. 17));

    return 0;
}
double dijeljenje2broja(double x, double y)
{
    double rez = 0.0;
    rez = x / y;
    return rez;
}
