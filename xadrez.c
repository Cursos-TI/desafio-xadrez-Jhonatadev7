#include <stdio.h>

// ====================================================
// Desafio de Xadrez - MateCheck (Nível Mestre)
// ====================================================
// Neste estágio, utilizamos recursividade para simular
// os movimentos da Torre, Bispo e Rainha, e loops
// complexos para o movimento do Cavalo em "L".
// ====================================================

// ----------------------
// Função recursiva Torre
// ----------------------
// Torre anda em linha reta. Aqui, 5 casas para a direita.
void moverTorre(int casasRestantes) {
    if (casasRestantes == 0) {
        return; // Condição de parada
    }
    printf("Direita\n");
    moverTorre(casasRestantes - 1); // Chamada recursiva
}

// ----------------------
// Função recursiva Bispo
// ----------------------
// Bispo anda em diagonal. Aqui, 5 casas para cima e à direita.
// Além da recursão, utilizamos loops aninhados para separar
// movimento vertical e horizontal.
void moverBispo(int casasRestantes) {
    if (casasRestantes == 0) {
        return; // Condição de parada
    }

    // Loop externo controla o movimento vertical ("Cima")
    for (int v = 0; v < 1; v++) {
        printf("Cima\n");

        // Loop interno controla o movimento horizontal ("Direita")
        for (int h = 0; h < 1; h++) {
            printf("Direita\n");
        }
    }

    moverBispo(casasRestantes - 1); // Chamada recursiva
}

// -----------------------
// Função recursiva Rainha
// -----------------------
// Rainha anda em todas as direções. Aqui, 8 casas para a esquerda.
void moverRainha(int casasRestantes) {
    if (casasRestantes == 0) {
        return; // Condição de parada
    }
    printf("Esquerda\n");
    moverRainha(casasRestantes - 1); // Chamada recursiva
}

// -----------------------
// Movimento do Cavalo
// -----------------------
// Cavalo se move em "L": aqui, 2 casas para cima e 1 para a direita.
// Implementado com loops aninhados, múltiplas variáveis e uso de
// continue/break para controlar o fluxo.
void moverCavalo(int casasCima, int casasDireita) {
    printf("Movimento do Cavalo:\n");

    for (int i = 1; i <= casasCima; i++) {
        // Se chegamos além do limite, interrompe
        if (i > casasCima) {
            break;
        }

        printf("Cima\n");

        // Loop interno controla a parte horizontal
        for (int j = 1; j <= casasDireita; j++) {
            // Usando continue para pular iterações desnecessárias
            if (j > 1) {
                continue;
            }
            printf("Direita\n");
        }
    }

    printf("\n");
}

// ====================================================
// Função principal
// ====================================================
int main() {
    // Constantes para o número de casas
    const int casasTorre = 5;
    const int casasBispo = 5;
    const int casasRainha = 8;
    const int casasCavaloCima = 2;
    const int casasCavaloDireita = 1;

    // Torre
    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);
    printf("\n");

    // Bispo
    printf("Movimento do Bispo:\n");
    moverBispo(casasBispo);
    printf("\n");

    // Rainha
    printf("Movimento da Rainha:\n");
    moverRainha(casasRainha);
    printf("\n");

    // Cavalo
    moverCavalo(casasCavaloCima, casasCavaloDireita);

    return 0;
}
