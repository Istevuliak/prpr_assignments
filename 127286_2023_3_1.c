#include <stdio.h>

int main(){
    int range;
    double min = 0;
    double max = 0;
    double n;

    scanf("%d", &range);
    for (int i = 1; i <= range; i++){
        scanf("%lf", &n);
        if (i == 1 || n < min){
            min = n;
        }
        if (n > max){
            max = n;
        }
       
    }
    
    printf("Maximum = %.2lf\n", max);
    printf("Minimum = %.2lf\n", min);

    return 0;
}