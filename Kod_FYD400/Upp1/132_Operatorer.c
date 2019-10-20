// labbkompendium upp 1.3.2 Operatorer.

// GÖR FÖRST PÅ PAPPER!

#include <stdio.h>

int main(void){
    int a=1, b=2,c=3,d=-5;
    printf("a) %d\n", a&~b&~c);
    printf("b) %d\n", a&~b&c);
    printf("c) %d\n", a&&~b&c);
    printf("d) %d\n", a^b&c);
    printf("e) %d\n", a&b^~c);
    printf("f) %d\n", a|b&c);

    return 0;
}