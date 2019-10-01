#include <stdio.h>

// gcc 111_HelloWorld.c -o 111_HelloWorld.exe

int main(void){
    int a=5,b=10;
    printf("L\x86t oss g\x94ra lite matte:\n");
    printf("%d * %d = %d", a, b, a*b);          // man kan skicka in en ekvation som utskrift

    return 0;
}

'/
Preprocessor
    Editerar programmets kod innan exekvering görs.
    Tar och processerar delar med # före, ex libs och macron.

Kompilator
    översätter programkoden till ett lägre språk (oftast maskinspråk)

Länkare
    Efter att filer har gjort till binärfiler så länkar Länakren ihop dessa till en exe fil.
    anledningen är om man delat upp programmet för att delar ska underhållas separat. t.ex. om viss hårdvara ändras men inte alla ekvationer.

/'