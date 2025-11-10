 
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