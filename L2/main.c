#include <stdio.h>
#include <stdlib.h>
 
 int najmanji()
 {
    int n;
    int min = 99999;
    
    printf("Unesite vrijednost n:", &n);
    int niz[n];

    for(int i=0;i<n;i++)
    {
        printf("Unesite %d. broj: %d" , i , niz[i]);
    }

    for(int i=0,i<n;i++)
    {
        if(niz[i]<min)
        min = niz[i];
    }

   return min;

 }

int sabiranje_brojeva(){
    int a=2;
    int b=3;
    return a+b;
}

double dijeljenje2broja(double, double);

=======
=======

<<<<<<< HEAD
int OduzimanjeDvaBroja()
{
    int a=1, b=2;
    return b-a;
}
=======
<<<<<<< HEAD
=======
<<<<<<< HEAD
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

>>>>>>> 65151cd9818d5431cbaf3347d870662f38809812
//najveci od n brojeva

int max(int niz[n],int n){
int max=niz[0];
for(int i=0;i<n;i++){
    if(niz[i]>max)
        max=niz[i];
}
return max;
}
<<<<<<< HEAD
>>>>>>> 7542a4cde6d1bd5a8ae456fb014e08516b4ff56f
=======

int main() {
    printf("Max (12, 17): %d", max(12. 17));

    return 0;
}
>>>>>>> 65151cd9818d5431cbaf3347d870662f38809812
double dijeljenje2broja(double x, double y)
{
    double rez = 0.0;
    rez = x / y;
    return rez;
}
>>>>>>> 3d6b9d47370cf43f363a2013570617b1c95d5dbe
