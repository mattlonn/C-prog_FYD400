// Labbkompendium upp 1.4.3 Omvandling
//Program som tar indata två datum och två tider och beräknar sedan tiden
//mellan dessa. differens i sekunder samt år, månader, dagar, timmar, 
//och sekunder

#include <stdio.h>

int main(void){
    int startTime[7], stopTime[7], i=0, j=0;
    int startYear, startMonth, startDay, startHour, startMinute, startSecond,
        endYear, endMonth, endDay, endHour, endMinute, endSecond;
    char c;
    printf("Ge input f\x94r startdatum: ");
    while((c = getchar()) != '\n'){
        if(c == '/' || c == ':'){
            i++;
        }
        else{
            startTime[i] += (j==0) ? (int) c * 10 :  (int) c;
        }
    }
    
        printf("\nY:%d, M:%d", startTime[0], startTime[1]);
    return 0;
}