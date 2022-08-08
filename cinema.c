#include <stdio.h>  
#include <stdlib.h>  

int main(){
    int lugares[14][10];
    char escolhidos[14][10];
    int i, j, polt, tipo, escolha, comeco;
    int *pm;
    char *pc;
    int n = 1;

    //Criando as matrizes

    for (i=0; i<14; i++) {
        for (j=0; j<10; j++) {
            lugares[i][j] = n;
            n++;
        }
    }

    for (i=0; i<14; i++) {
        for (j=0; j<10; j++) {
            escolhidos[i][j] = '-';
        }
    }

    comeco = 1;

    while (comeco == 1){
        printf("\n-----------CINEMA SKYWALKER-----------\n");
        printf("\n 0 - Sair");
        printf("\n 1 - Vender ingresso");
        printf("\n 2 - Mostrar plateia");
        printf("\n 3 - Mostrar ocupacao\n");

        printf("\nQual sua opcao: ");
        scanf("%d",&escolha);

            if (escolha == 1){
                printf("\n                 LUGARES DISPONIVEIS         \n");
                for (i=0; i<14; i++) {
                    for(j=0; j<10; j++)
                        {printf("%d    ", lugares[i][j]);}
                        printf("\n");
            }

                printf("\nEscolha sua poltrona: ");
                scanf("%d",&polt);
                if (polt < 1 || polt > 140){
                    printf("\nEscolha sua poltrona: ");
                    scanf("%d",&polt);
                }
                if (tipo < 0 || polt > 1){
                    printf("\nSeu tipo de ingresso (Meia ou Inteira)(0 ou 1): ");
                    scanf("%d",&tipo);
                }

                pc = &escolhidos[0][0];

                pm = &lugares[0][0];

                *(pm + (polt - 1)) = 0; 

                if (tipo == 1){
                    *(pc + (polt-1)) = 'i';
                    }
                else{
                    *(pc + (polt-1)) = 'm';
                    }
                            }
                    
                else if(escolha == 2){
                        printf("\n               LUGARES ESCOLHIDOS         \n");
                            for (i=0; i<14; i++) {
                                for(j=0; j<10; j++)
                                    {printf("%d    ", lugares[i][j]);}
                                    printf("\n");
                                    }
                                        }
                else if(escolha == 3){
                    printf("\n               LUGARES ESCOLHIDOS         \n");
                        for (i=0; i<14; i++) {
                            for(j=0; j<10; j++)
                                {printf("%c    ", escolhidos[i][j]);}
                                printf("\n");
                    }
                        }
                else if(escolha == 0){
                    comeco = 0;
                }
                else if(escolha > 3 || escolha < 1){
                    printf("\nNao existe opcao %d \n", escolha);
                }
}
}