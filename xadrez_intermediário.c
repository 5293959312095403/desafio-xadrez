#include <stdio.h>

int main(){
    int bispo = 0, rainha = 0, cavalo = 1, movimentoCavalo = 1; 

    for (int t = 0; t < 5; t++){
        printf("Torre, movimento #%d para a Direita. (→)\n", t + 1);
    }

    printf("-----------------------------------\n");

    do {
        printf("Bispo, movimento #%d para a Diagonal. (↗)\n", bispo + 1);
        bispo++;
    } while (bispo < 5);
    
    printf("-----------------------------------\n");

    while (rainha < 8) {
        printf("Rainha, movimento #%d para a Esquerda. (←)\n", rainha + 1);
        rainha++;
    }

    printf("-----------------------------------\n");

    while (cavalo--){
        for(int c = 0; c < 2; c++){
            printf("Cavalo, movimento #%d para Cima.(↑)\n", movimentoCavalo++);
            
        }
        printf("Cavalo, movimento #%d para a Direita. (→)\n", movimentoCavalo++);
    }
    


    return 0;
}
