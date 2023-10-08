#include <stdio.h>
#include <stdlib.h>

int main(){
    int N;
    scanf("%d", &N);
    if (N<1 || N>15){
        printf("Cislo nie je z daneho intervalu");
        return 1;
    } else {
        for (int i = 1; i <= N; i++) {
            printf("%d: ", i);
            for (int j = N; j >= i; j--){
                printf("%d", j);
                if (j > i) {
                    printf(" ");
                }
            }
            printf("\n");
        }
    }
    return 0;
}