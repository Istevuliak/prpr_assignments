#include <stdio.h>

int main(){
    int N;
    int r;
    int count_numbers = 0;

    scanf("%d", &N);

    for (int i = 1; i <= N; i++){
        scanf("%d", &r);
        if (r > 0 && r <= 100){
        count_numbers += 1;
        }
    }

    printf("%d", count_numbers);
    return 0;
}