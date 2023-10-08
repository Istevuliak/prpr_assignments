#include <stdio.h>

int main(){
    int x;
    int factorial = 1;
    scanf("%d", &x);
    while(x <= 0){
        scanf("%d", &x);
    }

    for (int i = 2;i <= x; i++){
        factorial *= i;
    }
    printf("%d", factorial);

    return 0;
}
