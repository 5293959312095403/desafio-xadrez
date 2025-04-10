#include <stdio.h>

int main(){
    int bispo = 0, rainha = 0; 

    for (int i = 0; i < 5; i++){
        printf("Torre, movimento #%d para a Direita.\n", i + 1);
    }

    printf("-----------------------------------\n");

    do {
        printf("Bispo, movimento #%d para Cima e Direita.\n", bispo + 1);
        bispo++;
    } while (bispo < 5);
    
    printf("-----------------------------------\n");

    while (rainha < 8) {
        printf("Rainha, movimento #%d para a Esquerda.\n", rainha + 1);
        rainha++;
    }
    

    return 0;
}
