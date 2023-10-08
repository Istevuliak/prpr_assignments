#include <stdio.h>

int main(){
    int range = 4;
    int list[range];
    int numbers;

    
    for (int i = 0; i<range; i++){
        scanf("%d", &numbers);
        list[i] = numbers;
    }
    if (list[0] < 10 && list[0] > 0){
        for (int i = 1; i <= range; i++){
            if (list[i] <= 2*list[i-1] && list[i] >= list[i-1]/2){
                printf("Postupnost je spravna.\n");
            break;
            }
        }
    }
    else {
        printf("Postupnost nie je spravna.\n");
        }
    
    return 0;
}