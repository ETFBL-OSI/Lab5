#include <stdio.h>
#include <stdarg.h>
int sabiranjeNbrojeva(int n, ...){
    int suma=0;
    va_list lista;
    va_start(lista, n);
    for(int i=0; i<n; i++){
        suma= suma +va_args(lista, int);
    }
    va_close(lista);
    return suma;
}