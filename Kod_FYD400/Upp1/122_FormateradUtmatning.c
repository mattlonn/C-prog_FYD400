// Labbkompendium 1.2.2 Formaterad utmatning av tal
// Skriver ut 2 tal i olika format

#include <stdio.h>
#include <math.h>

int main(void){
    int p, q;

    printf("Mata in tv\x86 heltal: ");
    scanf("%d %d", &p, &q);

    printf("\n\n p = %d\tq = %d\n", p, q);
    printf("p i hexa: %7.x\n", p);               // %x för hexa!
    printf("p/q: %12.3f\n", (float) p/q);
    printf("p%%q: %12.d\n", p%q);
    printf("q^p: %0.2e\n", powf(q, p));
    printf("Talet q med ""nollpadding"": %09d", q);

    return 0;
}