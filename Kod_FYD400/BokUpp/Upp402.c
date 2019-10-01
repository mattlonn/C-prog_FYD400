// >bokupp 4.2

#include <stdio.h>

int main(void){
    int i;
    printf("mata in \x86r: ");
    scanf("%d", &i);

    (i%4==0) ? (i%100!=0 || i%400 == 0) ? printf("Det \x84r ") : printf("Inget ") : printf("Inget "); // contdition ? TRUE : FALSE
    printf("skott\x86r!");

    return 0;
}