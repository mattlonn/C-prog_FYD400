/*Labbkompendie uppgift 1.5.6 Dynamisk allokering av minne
Program ska ta indata och dela upp dessa på två strängar
 - Sträng 1: tecken på jämn pos i array
 - Sträng 2: tecken på ojämn pos i array
Arrayer ska göras med dynamisk allokering

malloc - allokerar minne. returnerar en pekare till void ("vadSomHelstVärde")
realloc - reallocates memory
free - lösgör inputvariabelns tidigare allokerat minne

*/
#include <stdio.h>
#include <stdlib.h> // Needed to allocate memory

void printStr(char *str, int len, int i);
void printStr2(char *str, int lenght);

int main(void){
    char *str1, *str2, input;
    int len1=0, len2=0;

    str1 = (char *) malloc(5);
    str2 = (char *) malloc(5);

    printf("mata in data:");
    while((input = getchar()) != EOF && input != '\n'){
        if (len1 == len2){
            if (len1 != 0 && len2 %5 == 0)      //Allocates more mem if we already filled the current
                str1 = (char *) realloc(str1, len1 + 5);
            *(str1+len1++) = input;             //increment
        }
        else{
            if (len2 != 0 && len2 %5 == 0)
                str2 = (char *) realloc(str2, len2 + 5);
            *(str2+len2++) = input;
        }
    }
    //str1 = (char *) realloc(str2, len2+1))    if memory is more critical than runtime
    
    printf("\n\nstr\x84ng 1:");
    printStr(str1, len1, 0);        //Print out
    
    printf("\nstr\x84ng 2:");
    printStr(str2, len2, 0);
    //printf("\n\nlenght1: %d\tlenght2: %d\n", len1, len2);
    return 0;
}
void printStr(char *str, int len, int i){   // recursion
    if (i == len)
        return;
    putchar(*str);                  // Print out by moving the pointer to next adress
    printStr(str+1, len, ++i);
}