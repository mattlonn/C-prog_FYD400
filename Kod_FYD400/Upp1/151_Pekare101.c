//Labbkompendie upp 1.5.1 Pekare, avreferering och adresser
//1. testar olika uppgifter för utskrift av 11, förklaring varför dom
//  fungerar/inte fungerar
//2. vad gör & i scanf?
//3. gör som funktionen dubblera(UPP 141) fast med pekare
#include <stdio.h>

void dubblera(int *);

int main(void){
    //a)
    int heltal = 10;
    int *pekare_till_heltal = &heltal;  //Pekare till heltal
    printf("%i\n", pekare_till_heltal+1);   // Nope, adress + 1
    printf("%i\n", heltal+1);           // 11
    printf("%i\n", *(&heltal)+1);       // 11, heltal görs till pekare och avrefererar direkt +1
    printf("%i\n", *(pekare_till_heltal) +1); // 11, avrefererar pekaren till 10 +1
    printf("%i\n", &heltal +1);             // gör värdet till en pekare + 1 (adress + 1)

    /*b)
    vi skickar en pekare till adressen där vi vill ha värdet som scanas in.
    */

    //c)
    dubblera(&heltal);  // Vi skickar en pointer till funktionen dubblera
    printf("dubblering av heltal blir: %d", heltal);    //skriver ut nytt resultat efter dubblering (ingen return!)
    return 0;
}

void dubblera(int *a){
    *a <<= 1;
}