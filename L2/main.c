//najveci od n brojeva

int max(int niz[n],int n){
int max=niz[0];
for(int i=0;i<n;i++){
    if(niz[i]>max)
        max=niz[i];
}
return max;
}
