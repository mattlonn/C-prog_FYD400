//Uppgift 1.2.1 i Labkompendiet
//program som läser in 2 heltal, multiplicerar dessa och räknar antalet siffror i resultatet. Man ska inte kunna mata in fel data (resulterar i ett meddelande och avslutning)

#include <stdio.h>

int main(void){
    int tal1, tal2, sum, counter = 1;
    printf("Mata in tv\x86 heltal: ");
    scanf("%d %d", &tal1, &tal2);
    
    sum = tal1 * tal2;
    printf("%d", sum);


    while(sum > 9){
        counter++;
        sum = sum/10;
    }
    printf(" har %d siffror i sig.", counter);


    return 0;
}