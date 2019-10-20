//Uppgift 1.2.1 i Labkompendiet
//program som läser in 2 heltal, multiplicerar dessa och räknar antalet siffror i resultatet. Man ska inte kunna mata in fel data (resulterar i ett meddelande och avslutning)

// gcc 121_InputOutput.c -o 121_InputOutput.exe

#include <stdio.h>

int main(void){
    int tal1, sum, counter = 1;
    char t;
    printf("Ett heltal som ska g\x86ngras med 2\nMata in ett heltal: ");
    if (scanf("%d", &tal1) == 0){
        printf("\ninvalid input");      // om scanf = 0 blev det något fel. Då hamnar vi här
        return 0;
    }
    else{
        sum = tal1 * 2;
        printf("\n%d * 2 = %d", tal1, sum);
        while(sum > 9){         // Delar med 10. kunde använd bit operationer?
            counter++;
            sum = sum/10;
        }
    printf(" och har %d siffror i sig.", counter);
    }
    
    return 0;
}

//Fixa fel input!

