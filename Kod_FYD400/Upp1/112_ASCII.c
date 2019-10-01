//Uppgift 1.1.2 i Labkompendiet
// a) vad är "$" i hex?
// b) vilka två tal är gränserna för alla varsaler i LATIN-1?
// c) vilken datatyp representerar ASCII-tecknet i C?
//  d) skriv prog.
#include <stdio.h>

int main(void){
    char c = '$';
    printf("a) \x24 \x84r i hex: %x\n\n", c); //i hex 24, i dec 36

    char min = 'A', max = 'Z'; //räknar med engelska bokstäver endast (Z är sist)
    printf("b) Latin-1 Versaler:\nMinsta: %3i\nH\x94gsta: %3i\n", min, max);

    printf("c) byte (8 bitar, 0-127) men vi anv\x84nder inte sista biten\n\n");

    printf("d)\nI C kan vi g\x94ra en massa saker med escape-sekvenser\nvi har\t tabb\neller vi kan aktivera ett larm\a");
    return 0;
}