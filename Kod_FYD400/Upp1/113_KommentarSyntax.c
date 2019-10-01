//Uppgift 1.1.3 i Labkompendiet
// Rätta kometarsfel m.m.
// a)   /* printf("Skriv ut...");    */      
// b)   // printf("Skriv */ ut...");
// c)   printf("// Skriv ut...");
// d)   printf(//"Skriv ut...");
// e)   printf(/* Skriv ut... */"");
// f) Hitta ett alt. för "while(!KeyHit());"


#include <stdio.h>

int main(void){
    printf("a) ok. hela raden \x84r bortkommenterad\n");
    printf("b) ok. samma som a)\n");
    printf("c) ok, \"//\" tolkas inte som en kommentar utan skrivs ut\n");
    printf("d) Inte ok! med \"//\" utanf\x94r tolkas resten av raden som en kommentar vilket gör att printf saknar \");\" f\x94r att avsluta anropet\n");
    printf("e) ok, kommentaren har sitt slut utan att ta f\x94rst\x94ra koden f\x94r printf\n");

    // while(!Keyhit()); körs tills man trycker på en knapp
    printf("f)Ist\x84llet f\x94r Keyhit(), kan man anv\x94nda getchar(), se nedan\n");
    char c;
    printf("Press enter to continue");
    while((c = getchar()) != '\n');

    return 0;
}

