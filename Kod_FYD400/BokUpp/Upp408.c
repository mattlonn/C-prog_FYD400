// Bokuppgift 4.8
//En unsigned int med ett tal ska omvandlas till en textsträng och skriver ut 4 st hexadecimala siffror

#include <stdio.h>

int main (void){
    unsigned int m = 60110;
    char c[5];

    printf("str\x84ngi dec:hex: ");
    c[4] = '\n';
    for(int i=0;i<4;i++){
        c[i] = m & 0b1111;
        m = m >> 4;
        printf("%d:%x ", c[i], c[i]);
    }


    return 0;
}