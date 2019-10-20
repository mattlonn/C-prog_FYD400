/*Labbkompendium upp 2.1.1 Filer
Program skapar 3 matriser. Spara i varsin fil
    * matris1.bin matris2.bin matris3.bin
om filerna finns skriv över dom.
när filerna är sparade ska programmet skriva ut matriserna till stdout. läs labbkompen.
*/
#include <stdio.h>
#include <stdlib.h>

void fileError(void);
void fileOpen(FILE **bin);

int main(void){
    FILE *testfile;

    fileOpen(&testfile);
    

    int data[5] = {123,456,789, 12, 24};

    fwrite(data, sizeof(int), 5, testfile);     // write
    fclose(testfile);
    printf("\nsuccess!\n");

    fileOpen(&testfile);
    int indata[5];
    fread(indata, sizeof(int), 5, testfile);    // read

    for (int i=0; i<5; i++){
        printf("\nData %d: %d", i, indata[i]);
    }
    fclose(testfile);


    // fcloseall() STÄNGER ALLA FILER!
    return 0;
}
void fileOpen(FILE **bin){
    char *testfilePath = "C:\\Git\\C-prog_FYD400\\Kod_FYD400\\Upp1\\testfile.bin";
    if ((*bin = fopen(testfilePath, "r+b")) == NULL)
        fileError();
        return;

}
void fileError(void){
    printf("\nSomething went wrong");
    exit(99);
}