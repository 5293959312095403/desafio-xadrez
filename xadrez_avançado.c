#include <stdio.h>
// esse foi cansativo de fazer


void movimentoTorre(int casas){
    if (casas > 0){
        printf("Torre: movimentando-se 5 casas para a Direita.(→)\n");
        movimentoTorre(casas - 1);
    }
}

void movimentoRainha(int casas){
    if (casas > 0){
        printf("Rainha: movimentando-se 8 casas para a Esquerda.(←)\n");
        movimentoRainha(casas - 1);
    }
}

void movimentoBispo(int casas){
    if (casas >= 1){
        for (int i = 0; i <  5; i++){
            printf("Bispo: movimentando-se 5 casas para a diagonal(↗)\n");
        }
        movimentoBispo(casas - 1);
    }
    
}

void movimentoCavalo(int casas){
    if (casas > 0){
        for(int linha = 1; linha < 3; linha++){
            printf("Cavalo: movimentando-se para Cima.(↑)\n");
            if (linha == 2){
                printf("Cavalo: movimentando-se para a Direita.(→)\n");
            }
        }
    }
    movimentoCavalo (casas - 1);
}

int main(){ 
    printf("--------------------------------------------------------\n");
    
    movimentoTorre(5);

    printf("--------------------------------------------------------\n");

    movimentoBispo(1);
    
    printf("--------------------------------------------------------\n");

    movimentoRainha(8);

    printf("--------------------------------------------------------\n");

    movimentoCavalo(1);
    


    return 0;
}
