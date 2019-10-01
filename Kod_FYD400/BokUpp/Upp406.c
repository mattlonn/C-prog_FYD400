// Bokuppgift 4.6

#include <stdio.h>

int main(void){

    int i;
    printf("mata in 4 sista siffrorna i personnumret: ");
    scanf("%d", &i);
    ((i/10)%2==1) ? printf("Kvinna") : printf("man");

    return 0;
}