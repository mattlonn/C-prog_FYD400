// Labbkompendium upp 1.4.1 Funktioner!
/*Kod som finns i flera olika filer. skapande av egna libs
a) skapa 3 filer
    * convert.h - funktionsprototyp
    * convert.c - input i m och returnerar värdet i mm
    * main.c    - enkelt program so manvänder sig utav funktionen i convert.h
b)Förklara hur instructioner till förbehandlaren kan förhindra att samma 
deklarationsinformation inkluderas dubblet under kompilering
c) förklara skillnaden mellan två preprocessordirektiv:
    * #include <Test.h>
    * #include "test.h"
*/
#include <stdio.h>
#include "141_convert.h"

int main(void){
    unsigned long distance;

    printf("Hej, mata in distansen i m: ");
    scanf("%d", &distance);
    printf("\nDistansen i mm blir: %d", meter2milli(distance));

    return 0;
}
/*
b)


c) med <> söker kompilator i standardbiblioteken
men med "" söker den i filens egna mapp



*/