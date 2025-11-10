int racunanjeFaktorijela(int n)
{   
    int p=n;
    for(int i=n-1; i>1; i--)
        p*=i;
    return p;
}