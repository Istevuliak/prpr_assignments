#include <stdio.h>

void mocnina(double x, int n){
    double vysledok = 1;

    for (int i = 1; i <=n; i++){
        vysledok *= x;
        printf("%.2lf^%d = %.2lf \n", x,i,vysledok);
    }
}


int main(){
    double x;
    int n;

    scanf("%lf %d", &x, &n);
    mocnina(x,n);
    return 0;
}