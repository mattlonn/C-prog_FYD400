// räknar ut hur långt en bil gått senaste året och bensinförbrukning

#include <stdio.h>

int main(void){
    float oldReading, newReading, gasUsed, totDriven;
    printf("Ge m\x84tarst\x84llning fr\x86n f\x94rra \x86ret: \n");
    scanf("%f", &oldReading);
    printf("Ge m\x84tarst\x84llning fr\x86n detta \x86ret: \n");
    scanf("%f", &newReading);
    printf("Bensinf\x94rbrukning: \n");
    scanf("%f", &gasUsed);
    totDriven = newReading - oldReading;
    
    
    printf("Tot str\x84 cka k\x94rd: %f \nBensinf\x94rbrukning: %f", totDriven, gasUsed/totDriven);

    

    return 0;
}