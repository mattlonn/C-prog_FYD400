// Labbkompenidum 1.3.5
//växelkassa som ska retunera summan tillbaka av ett köp.
//Även antalet och vilka sedlar

#include <stdio.h>

int main(void){
    float price, payed, moneyBack;
    int moneyBack_temp, bills[8] = {1000,500,100,50,20, 10, 5, 1};
    //Valörere i enn array så vi kan iterera genom den (bills för att jag itne orkar ändra)

    do{
        printf("Ange pris och summa betalat med mellanslag mellan: ");
        scanf("%f %f", &price, &payed);     //input, om priset är högre görs inmatning om
    }while(price > payed);


    //Räknar ut om vi har 0.5 i värdet
    moneyBack_temp = (int) (payed * 10 - price * 10);
    moneyBack += (moneyBack_temp % 10 < 5) ? moneyBack_temp/10: moneyBack_temp/10 + 0.5; //moneyBack = 0.5;
    moneyBack_temp /= 10;

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