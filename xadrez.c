#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Definição das constantes de casas que cada peça deve se mover
    const int casasTorre = 5;
    const int casasBispo = 5;
    const int casasRainha = 8;

    // Implementação de Movimentação da Torre (usando for)
    // Torre anda em linha reta: neste caso, 5 casas para a direita.
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // Implementação de Movimentação do Bispo (usando while)
    // Bispo anda em diagonal: neste caso, 5 casas para cima e à direita.
    printf("Movimento do Bispo:\n");
    int i = 1;
    while (i <= casasBispo) {
        printf("Cima, Direita\n");
        i++;
    }
    printf("\n");

    // Implementação de Movimentação da Rainha (usando do-while)
    // Rainha pode andar em todas as direções: aqui simulando 8 casas para a esquerda.
    printf("Movimento da Rainha:\n");
    int j = 1;
    do {
        printf("Esquerda\n");
        j++;
    } while (j <= casasRainha);
    printf("\n");

    return 0;
}
