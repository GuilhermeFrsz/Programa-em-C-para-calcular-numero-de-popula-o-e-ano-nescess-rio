#include <cs50.h>
#include <stdio.h>
#include <math.h>

float contador(int pi, int pf){
    float year = 0;
    do{
        pi = pi + (pi/3) - (pi/4);
        year++;
    }while(pi < pf);

    return year;
}

int main(void)
{

    int pi ,
        pf = 0;
    char tecla;

        printf("-------------------------------------\n");
        printf("| Autor: Guilherme Freitas de Souza \n");
        printf("| GitHub: @Guilhermefrsz\n");
        printf("| Insta: @guilhermefrsz\n");
        printf("| DATA DE CRIAÇÃO: 24/12/2023\n\n");
        printf("Precione ENTER para continuar.....");

        do{
          tecla =  getchar();
        }while (tecla != '\n');

        printf("Mínimo: 9\n");
        do{
            pi = get_int("Qual o valor inicial da população? ");
        }while( pi < 9);

        do{
            pf = get_int(" Mínimo: %i \n Qual o valor final da população? ", pi);
        }while( pf < pi  );



    float nes =  contador(pi,pf);
    int qntn = (int)floor(nes);

    printf("\n------------------RESPOSTAS------------------\n");
    printf("| Quantidade INICIAL: %i\n", pi);
    printf("| Quantidade FINAL: %i\n", pf);
    printf("| A quantidade de anos nescessária é: %i\n\n", qntn);

}
