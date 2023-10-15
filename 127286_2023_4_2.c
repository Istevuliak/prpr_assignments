#include <stdio.h>

double tyzdenna_mzda(double h_mzda, double hod){
    double sum = 0;
    int extra_hours = 0;

    if (hod < 40){
        sum = h_mzda*hod;

    } else if (hod < 60){
        extra_hours = hod - 40;
        sum = (40*h_mzda) + (extra_hours*1.5*h_mzda);

    } else {
        extra_hours = hod - 60;
        sum = (40*h_mzda) + (extra_hours*2*h_mzda) + (20*1.5*h_mzda); 
    
    }

    return sum;
}

int main(){
    int input;
    double h_mzda, hod, sum;
    double overall_sum = 0;

    scanf("%d", &input);
    for (int a = 1; a<= input; a++){
        scanf("%lf %lf", &h_mzda, &hod);
        sum = tyzdenna_mzda(h_mzda,hod);
        overall_sum += sum;
        printf("Hod. mzda: %.2lf Euro/hod, hodin: %.2lf, spolu: %.2lf Euro\n", h_mzda, hod,sum);
    }
  
    
    printf("Celkova mzda: %.2lf\n", overall_sum);

    return 0;
}