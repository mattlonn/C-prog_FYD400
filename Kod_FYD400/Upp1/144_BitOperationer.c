// Labbkompendium upp 1.4.4 bitoperationer
//Program med funktion som skiftar ett bitarna åt vänster i en Uint
//input tal och antal skiftningar
//bitar som "faller utanför" ska stoppas in i början

#include <stdio.h>
unsigned int shifter(unsigned int a, unsigned int shifts);
void printBin(int printValue);

int main(void){
    unsigned int value, shiftAmount;
    printf("Ange ett tal f\x94r shiftoperation samt antal skiftningar:\n"
            "(ex: 128 8): ");
    scanf("%d %d", &value, &shiftAmount);
    printBin(value);
    printf("\nshifting!");
    printBin(shifter(value, shiftAmount));


    return 0;
}


unsigned int shifter(unsigned int a, unsigned int shifts){
    unsigned int temp, bitmask, maxsize;
    maxsize = 16;
    temp = a;

    a <<= (shifts > maxsize) ? maxsize : shifts;
    temp >>= (shifts > maxsize) ? maxsize : maxsize - shifts;

    return a = a | temp;
}
void printBin(int printValue){
    static int first=0;
    (first) ? printf("\nBin\x84rv\x84rde efter: "): printf("\nBin\x84rv\x84rde innan: ");
    for(int i=0; i< 16; i++){
        if(i%4==0){
            printf(" ");
        }
        (printValue & 0x8000) ? printf("1") : printf("0");

        printValue <<= 1;
    }
    first++;
}