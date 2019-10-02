// Bokupp 4.7
//tar en char och delar upp byten i två delar

#include <stdio.h>

int main(void){

    char c = 'g';
    short p, p2;
    int i;
    printf("short: %d\n", sizeof(p));
    printf("char: %d\n", sizeof(c));
    printf("int: %d\n", sizeof(i));
    p = (short) c & 0b1111;
    p2 = (short) c >> 4;
    printf("\nc: %d\n", c);
    printf("p: %d\n", p);
    printf("p2: %d", p2);

    
    return 0;
}