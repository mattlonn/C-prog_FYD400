// Labbkompenidum 1.3.5
//växelkassa som ska retunera summan tillbaka av ett köp.
//Även antalet och vilka sedlar

#include <stdio.h>
#define SEDEL_1 1000;
#define SEDEL_2 500;
#define SEDEL_3 100;
#define SEDEL_4 50;
#define SEDEL_5 20;
#define KRONA_1 10
#define KRONA_2 5;
#define KRONA_3 1;
#define KRONA_4 0.5;



int main(void){
    float price, payed, moneyBack, coins[5] = {10,5,1,0.5};
    int moneyBack_temp, bills[8] = {1000,500,100,50,20, 10, 5, 1};

    do{
        printf("Ange pris och summa betalat med mellanslag mellan: ");
        scanf("%f %f", &price, &payed);
    }while(price > payed);
    moneyBack_temp = (int) (payed * 10 - price * 10);
    moneyBack += (moneyBack_temp % 10 < 5) ? moneyBack_temp/10: moneyBack_temp/10 + 0.5; //moneyBack = 0.5;
    moneyBack_temp /= 10;

    printf("Pengar tillbaks: %.1f \nI sedlar&mynt:\n", moneyBack);
    printf("%d: %d\n", bills[0], moneyBack_temp/1000);
    for(int i=1; i<8; i++){
        printf("%4d: %d\n", bills[i], (int) moneyBack_temp % bills[i-1]/bills[i]);
        moneyBack_temp -= moneyBack_temp % bills[i-1]/bills[i]*bills[i];
    }
    printf(" 0.5: %d", moneyBack > (int) moneyBack ? 1:0);

    //moneyBack % bills[i] > bills[i+1] ? printf("%d: 1\n", bills[i]);
    // * ? true : false


    return 0;
}