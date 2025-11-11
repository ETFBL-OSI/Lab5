#include <stdio.h>

double srednjaVr(){
    int n;
    double br[n], zbir=0.0;
    scanf("%d", &n);
    for(int i=0; i<n; i++) {
        scanf("%lf", br[i]);
        zbir+=br[i];
    }
    return zbir/n;
}
