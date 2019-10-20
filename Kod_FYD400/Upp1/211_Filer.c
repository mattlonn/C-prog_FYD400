/*Labbkompendium upp 2.1.1 Filer
Program skapar 3 matriser. Spara i varsin fil
    * matris1.bin matris2.bin matris3.bin
om filerna finns skriv över dom.
när filerna är sparade ska programmet skriva ut matriserna till stdout. läs labbkompen.
*/
#include <stdio.h>
#include <stdlib.h>
#define MTRXSIZE 2      // Ett macro som borde läggas till på fler ställen!

void fileError(void);
void fileOpen(FILE **bin, char **path, char *mode);
void fileWrite(FILE **bin, float data[MTRXSIZE][MTRXSIZE]);
void printMatrix(float data1[MTRXSIZE][MTRXSIZE], float data2[MTRXSIZE][MTRXSIZE], float data3[MTRXSIZE][MTRXSIZE]);

/*
Om fprintf inte är korrekt kolla på: fputs m.m. kap 10.6
    - fgets (hämtar) -> fgets(variabel, längd, fil) EX:  fgets(matrix1[1], 2, binFile1)
    - fputs (skickar)   -> fputs(variabel, fil)     EX:  fputs(matrix1[1]m binFile1)

om returvärdet är NULL så gick något fel (felhantera)
*/


//
int main(void){
    FILE *binFile1, *binFile2, *binFile3;
    char *binPath1 = "C:\\Git\\C-prog_FYD400\\Kod_FYD400\\Upp1\\matris1.bin";
    char *binPath2 = "C:\\Git\\C-prog_FYD400\\Kod_FYD400\\Upp1\\matris2.bin";
    char *binPath3 = "C:\\Git\\C-prog_FYD400\\Kod_FYD400\\Upp1\\matris3.bin";
    char *modeW = "w+b", *modeR = "r+b";
    fileOpen(&binFile1, &binPath1, modeW);       // File create &open
    fileOpen(&binFile2, &binPath2, modeW);
    fileOpen(&binFile3, &binPath3, modeW);
    
    float matrix1[][2] = {2.0,4.0,-1.0,-3.0};    //Matrixes made
    float matrix2[][2] = {0.0,1.0,1.0,0.0};     //[][2] ok! second element must be known!
    float matrix3[][2] = {0.0,-1.0,1.0,0.0};

    fileWrite(&binFile1, matrix1);  // Write to file (matrix size is needed to be known before)
    fileWrite(&binFile2, matrix2);  // !! if matix size change this printer wont work.
    fileWrite(&binFile3, matrix3);

    printf("\nData before:\n");                 // printing out matrix
    printMatrix(matrix1, matrix2, matrix3);

    for (int i=0; i<2; i++){
        for (int j=0; j<2; j++){                // zeroing values
            matrix1[i][j] = 0;
            matrix2[i][j] = 0;
            matrix3[i][j] = 0;
        }
    }
    printf("\nData zeroed:\n");                 // Printing out matrix
    printMatrix(matrix1, matrix2, matrix3);

    _fcloseall();                               //Closing all files
    
    fileOpen(&binFile1, &binPath1, modeR);      // Open file (read only)
    fileOpen(&binFile2, &binPath2, modeR);
    fileOpen(&binFile3, &binPath3, modeR);

    for (int i=0; i<2; i++){
        fread(matrix1[i], sizeof(float), 2, binFile1);  //Reading values from file
        fread(matrix2[i], sizeof(float), 2, binFile2);
        fread(matrix3[i], sizeof(float), 2, binFile3);
    }

    printf("\nData read from bin files:\n");    // printing out matrix
    printMatrix(matrix1, matrix2, matrix3);
    
    _fcloseall();       // Closing all files (to close one: fclose(file))
    return 0;
}
void printMatrix(float data1[MTRXSIZE][MTRXSIZE], float data2[MTRXSIZE][MTRXSIZE], float data3[MTRXSIZE][MTRXSIZE])
{
    for (int i=-1; i<2; i++){
        if (i==-1){
            printf("\n    matrix 1\t    matrix 2\t    matrix 3\n");
            continue;
        }
        printf("%6.2lf  %6.2lf\t", data1[i][0], data1[i][1]);
        printf("%6.2lf  %6.2lf\t", data2[i][0], data2[i][1]);
        printf("%6.2lf  %6.2lf\n", data3[i][0], data3[i][1]);
    }
}

void fileWrite(FILE **bin, float data[MTRXSIZE][MTRXSIZE]){
    for (int i=0; i<MTRXSIZE; i++)
        fwrite(data[i], sizeof(float), MTRXSIZE, *bin);
}

void fileOpen(FILE **bin, char **path, char *mode){
    if ((*bin = fopen(*path, mode)) == NULL)
        fileError();
}
void fileError(void){
    printf("\nSomething went wrong");
    exit(99);
}