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
