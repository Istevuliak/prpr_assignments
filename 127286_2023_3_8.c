#include <stdio.h>


void nasobok(double x, int n){
    double vysledok;
 
    if(n>0){
        for(int i = 1; i <= n; i++){
        vysledok = x * i;
         printf("%.2lf * %d = %.2lf\n", x, i, vysledok);
        }
    }else {
        for(int i = n; i <= x; i++){
        vysledok = x * i;
         printf("%.2lf * %d = %.2lf\n", x, i, vysledok);
        }
    }

}

int main(){
    double x;
    int n;
    
    scanf("%lf %d", &x, &n);

    nasobok(x,n);

    return 0;
}