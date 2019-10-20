// Labbkompendium 1.2.2 Formaterad utmatning av tal
// Skriver ut 2 tal i olika format

#include <stdio.h>
#include <math.h>

int main(void){
    int p, q;

    printf("Mata in tv\x86 heltal: ");
    if (scanf("%d %d", &p, &q) < 2){
        printf("Invalid input");
        return 0;
    }

    printf("\n\n p = %d\tq = %d\n", p, q);
    printf("p i hexa: %7.x\n", p);               // %x för hexa! utskrift: talet p i hexa
    printf("p/q: %12.3f\n", (float) p/q);       // 12 enheter, 3 decimaler
    printf("p%%q: %12.d\n", p%q);               // rest
    printf("q^p: %0.2e\n", powf(q, p));         // "vetenskaplig uttryckt" //kan ta bort decim
    printf("Talet q med ""nollpadding"": %09d", q); // 9 siffror, fyller ut tomma med "0"

    return 0;
}

