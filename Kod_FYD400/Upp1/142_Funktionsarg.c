/* Labbkompendium upp 1.4.2 Funktionsargument - pass by value
 skriv en icke fungerande funktion och beskriv varför den inte Funktionsargument
1. initiera, skriv ut ett tal
2. använd funktion till att dubblera
3. skriv ut talet igen, förklara varför det inte dubblades
4. föreslå en förbättring

*/
#include <stdio.h>

void dubblera(int);

int main(void){
    int i = 23;
    printf("talet: %d", i);
    dubblera(i);
    printf("\ntalet efter dubblering: %d", i);
    return 0;
}

void dubblera(int i){
    i = 2*i;
}

/*
a) 32
I funktionen dubblera har vi en lokal var i som inte har något att göra
med i utanför i mainfunktionen. och eftersom vi inte har någon return
påverkar vi inte i i main funktionen

b)
Lösning:
    Gör funktionen dubblera till en int och returnera värdet till
    mainfunktionens i. 

    Eller skicka en pekare till i.
*/