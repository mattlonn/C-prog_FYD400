#include <stdio.h>

int main(void){
    char c;
    int i=0;
    printf("mata in rader, avsluta inmatning med ny rad och sedan ctrl+z\n");
    while ((c = getchar()) != EOF)
    {
        if (c == '\n')
            i++;
    }
    printf("\nAntal rader \x84r %i", i);
    return 0;
}