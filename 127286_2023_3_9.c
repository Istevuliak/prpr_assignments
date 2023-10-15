#include <stdio.h>

int parne(int x[], int pocetx, int y[]){
    int length = 0;
    for (int i = 0; i< pocetx; i++){
        if (x[i] % 2 == 0){
            y[length] = x[i];
            length++;
        }

    }
    printf("y: {");

    for (int i = 0; i<length; i++){
        if(i == length-1){
            printf("%d }\n", y[i]);
        } else{
            printf("%d ,", y[i]);
        }
    }
    return 0;

}

int main(){
    int pocetx = 7;
    int x[] = {4, 7, 1, 3, 2, 5, 6};
    int y[100];
    int pocety = parne(x, pocetx, y);
    

    return 0;

}