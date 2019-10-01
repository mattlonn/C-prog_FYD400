//>Bokuppgifter 4.1

#include <stdio.h>

int main (void){
    int i = 3, j = 7;
    printf("i=3\nj=7\n\ni<=j: %d\n", i<=j);
    i = 3;
    j = 7;
    printf("e) i && i -3: %d\n", i && i - 3);
    i = 3;
    j = 7;
    printf("f) (++i < 3) ? !j : j  %d\n", (i++ < 3) ? !j : j);
    i = 3;
    j = 7;
    printf("g) i & j: %d\n", i&j);
    i = 3;
    j = 7;
    printf("h) j <<= i %d", j <<=i);

    return 0;
}