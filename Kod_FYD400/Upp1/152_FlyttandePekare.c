/*Labbkompendium upp 1.5.2 Flyttande pekare
Gör ett program med en meny liknande uppgift 1.3.3. Ditt program skall skapa en sträng i 
minnet:
char text[] = "Gothenburg";
samt en pekare som pekar på början av strängen:
char *my_pointer = text;
Låt nu användaren manipulera pekaren med menyvalen, och skriv ut vad pekaren pekar på. 
Pekaren får inte peka utanför det allokerade minnet. Exempel på utskrift kan vara*/

#include <stdio.h>

int main(void){
    char text[11] = "Gothenburg";

    char *my_pointer;// = &text[0];
    int menu = 0;

    my_pointer = &text[0];
    do{
        for(int i=0;i<10;i++){
            printf("%c", text[i]);  // Skriver ut text
        }
        printf("\nPekaren \x84r p\x86 %c\nVill du:\n1. Flytta pekaren h\x94ger"
                "\n2. Flytta pekaren v\x84nster\n3. Avsluta\nVal: ", *my_pointer);
        if(scanf("%d", &menu) == 0)
        {
            return 0;
        }
        if (menu == 1)
        {                   // Pointer till höger
                if (*(my_pointer+1) == NULL)
                    printf("\nPekaren p\x86 max\n");
                else
                    my_pointer++;
        }
        else if (menu == 2)
        {                   // Pointer till vänster
            if (my_pointer  == text)    // Text är pointer till början av arrayen!
                printf("\nPekaren p\x86 min\n");
            else
                my_pointer--;
        }
        else if (menu != 3)
            printf("Fel input");
    }while(menu != 3);



    return 0;    
}