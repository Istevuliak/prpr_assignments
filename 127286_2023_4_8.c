#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE* fr, * fw;
    char symbol;
    char znaky;
    scanf("%c", &symbol);

    fr = fopen("znak.txt", "r");
    fw = fopen("novy.txt", "w");

    if ((fr = fopen("znak.txt", "r"))== NULL){
        printf("Neuspesne otvorenie.");
        return 0;
    }

    if(symbol == 's'){
        while((znaky=getc(fr)) != EOF){
            putc(znaky,fw);
            }
    }else{
        while((znaky=getc(fr)) != EOF){
            printf("%c", znaky);
            }
    }

    fclose(fr);
    fclose(fw);
    return 0;
}