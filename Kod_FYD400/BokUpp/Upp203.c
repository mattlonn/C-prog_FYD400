//skriver ut en fin tabell
#include <stdio.h>

int main(void){
    int max;
    printf("ge input p\x86 maxv\x84rde p\x86 i: ");
    scanf("%d", &max);
    printf(" i   i*i   i*i*i\n");
    printf("=== ===== =======\n");
    for(int i=1; i < max+1; i++){
        printf("%2d%5d%7d\n", i, i*i, i *i*i);
    }
    

    return 0;
}