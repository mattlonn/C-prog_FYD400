// Labbkompenidum 1.3.5
//växelkassa som ska retunera summan tillbaka av ett köp.
//Även antalet och vilka sedlar

#include <stdio.h>
int printInputError();

int main(void){
    float price, payed, moneyBack;
    int inputError = 0, moneyBack_temp, bills[8] = {1000,500,100,50,20, 10, 5, 1};
    //Valör i enn array så vi kan iterera genom den (bills för att jag inte orkar ändra)

    // MENU
    do{
        inputError = 0;
        printf("Ange pris och summa betalat med mellanslag mellan: ");

        inputError = (scanf("%f %f", &price, &payed) < 2) ? printInputError() : 0;// if error call printError (empty the stack)
        if(price > payed){
            printf("Betala mer tack.\n\n");
            inputError = 1;
        }  
    }while(inputError);


    moneyBack_temp = (int) payed - price;   //Cut of all deciamls att store temporary
    moneyBack = payed - price - (moneyBack_temp + 0.25) > 0 ? moneyBack_temp + 0.5: moneyBack_temp;
    

    printf("Pengar tillbaks: %.1f \nI sedlar&mynt:\n", moneyBack);
    printf("%d: %d\n", bills[0], moneyBack_temp/1000);
    for(int i=1; i<8; i++){ // Itererar genom alla valörer inom 1000 och 0.5
        printf("%4d: %d\n", bills[i], (int) moneyBack_temp % bills[i-1]/bills[i]);
        moneyBack_temp -= moneyBack_temp % bills[i-1]/bills[i]*bills[i];
        // Moneyback för calc tar bort en viss summa för ta bort fel vid 20/10 valör
    }
    printf(" 0.5: %d", moneyBack > (int) moneyBack ? 1:0);

    return 0;
}

int printInputError(void){
    char errorRead;
    scanf("%c", &errorRead);
    printf("Du skrev %c, skriv bara siffror tack\n\n", errorRead);
    return 1;
}