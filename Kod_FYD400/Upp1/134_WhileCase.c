//Kompendieuppgift 1.3.4
// manipulera en siffre med while/case 

#include <stdio.h>

int main(void){
    int menu= 0, value = 0;
    while(menu != 4){                               //Loop av meny
        printf("V\x84rdet \x84r %d, vill du:\n"
        "1. Addera med 1\n"
        "2. Multiplicera med 2\n"
        "3. Subtrahera med 3\n"
        "4. Avsluta\n"
        "val: ", value);
        if (scanf("%d", &menu) != 1){               // Misslyckad inläsning ger scanf() = 0, då fick vi inte ett heltal
            printf("\nFel input!\n\n");             // failmedd
        }
        else{
            switch(menu){                   // Menyvalet utförs
                case 1: 
                    value++;
                    break;
                case 2:
                    value *= 2;
                    break;
                case 3:
                    value -= 3;
                    break;
                case 4:
                    printf("bye bye");         
            }
        }

    }

    return 0;
}