/* Labbkompendium upp 1.5.3 Minnesadresser
Pekarvariabler är helt enkelt heltal som kan tolkas som en viss position i datorns minne: en adress.
Anledningen till att vi inte bara använder heltal är att pekare har en egen matematik.
Skriv ett program som har tre pekarfält: en int*[], en char*[], och en double*[], alla med 4 element.
Programmet ska skriva ut adressen till alla element med hjälp av en for-loop och pekararitmetik.
Programmet ska även skriva ut skillnaden mellan adresserna i det tredje och det andra elementet av
alla fält.
Vad får du för resultat? Varför är det på detta sätt?
*/

// Element - "cellen" arrayen

#include <stdio.h>

int main(void){
    int a[4], *pa;
    char b[4], *pb;
    double c[4], *pc;

    printf("intArray:\n");
    for(pa=a; pa < &a[4]; pa++)
    {
        printf("\nadress: %p", pa);
        if (pa == &a[1])
            printf(" adresskillnad: %d", (pa+1) - pa);
    }

    printf("\n\ncharArray:\n");
    for(pb=b; pb < &b[4]; pb++)
    {
        printf("\nadress: %p", pb);
        if (pb == &b[1])
            printf(" adresskillnad: %d", (pb+1) - pb);
    }

    printf("\n\nDoubleArray:\n");
    for(pc=c; pc < &c[4]; pc++)
    {
        printf("\nadress: %p", pc);
        if (pc == &c[1])
            printf(" adresskillnad: %d", (pc+1) - pc);
    }
    return 0;
}
