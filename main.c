#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <locale.h>

int main() {
 int opt;
 int resp;
 setlocale(LC_ALL, "Portuguese");


INICIO: printf("\n 1 - Para converter de BIN para DEC. \n 2 - Para converter de DEC para BIN. \n 3 - Para SAIR. \n ");
 scanf("%d", &opt);

 switch (opt)
{
   case 1:
    system("cls");
    binToDec();


    printf("\n 1 - Para continuar \n 2 - Para sair \n");
    scanf("%d", &resp);
    system("cls");
    while(resp == 1) {
        goto INICIO;
    }

     break;

   case 2:
     system("cls");
     decToBin();


     printf("\n 1 - Para continuar \n 2 - Para sair \n");
     scanf("%d", &resp);
     system("cls");
     while(resp == 1) {
        goto INICIO;
    }

     break;


   case 3:
    break;

}

    return 0;
}

int binToDec() {
        long num;
        int dec = 0, rem = 0, place = 0;


        printf("\n      Digite o n�mero que deseja converter de BIN para DEC \n");
        scanf("%ld", &num);
        printf("    O n�mero bin�rio %ld convertido para decimal � ", num);
        while(num != 0) {
            rem = num % 10;

            if(rem != 1 && rem != 0) {
                printf(" %ld, pois o n�mero n�o � bin�rio \n", num);
                return -1;

            } else if(rem == 1){
                dec = dec + (pow(2, place));
            }
            num = num / 10;
            place++;
        }

        printf("%d\n", dec);

}

int decToBin() {
        int num, bin = 0, rem = 0, place = 1;
        printf("\n      Digite o n�mero que deseja converter de DEC para BIN \n");
        scanf("%d", &num);
        printf("    O n�mero decimal %d convertido para bin�rio � ", num);

        while(num) {
            rem = num % 2;
            num = num / 2;
            bin = bin + (rem * place);
            place = place * 10;

        }

        printf("%d\n", bin);


}

