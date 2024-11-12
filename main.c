#include<stdio.h>
int oduzimanje_prvih_n_brojeva(int n)
{
    if (n < 0)return 0;
    int razlika= 0;
    for (int i = 0; i <= n; i++)
        razlika -= i;
    return razlika;
}
int main()
{
    int n;
    scanf("%d", &n);
    int ispis = oduzimanje_prvih_n_brojeva(n);
    printf("%d", ispis);
    return 0;
}
