/*Labbkompendium upp 1.3.6 Formatering och gränser
program som beräknar ekv. med lämplig formatering av resultatet

Följande gränser
-15 < x < 15
-1 < x < 1      (med upplösning på 0.1)
*/

#include <stdio.h>
#include <math.h>
#define PI 3.14159

//powf(x,y) = x^y
//sin() är i rad
void printVal(int limit, double step);

int main(void){

    printf("\nekv: f(x)=4x^3+3sin(x)^2-5x+7\n\t[-15 < x < 15]\n");
    printVal(15, 1);
    printf("\n\t[-1 < x < 1]\n");
    printVal(1,0.1);
    return 0;
}
void printVal(int limit, double step){
    for (double x=-1*limit; x<=limit; x=x+step)
        printf("\t[x=%4.1lf] %12.2lf\n", x, 4*powf(x, 3) + 3*powf(sin(x*PI/180),2)-5*x-7);
}