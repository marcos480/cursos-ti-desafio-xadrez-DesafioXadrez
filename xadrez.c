#include <stdio.h>

/*
    Movimentos de Xadrez em C
    - Torre, Bispo e Rainha -> recursividade
    - Bispo também com loops aninhados
    - Cavalo -> loops complexos (aninhados, com continue/break)
*/

// =============================
// Funções Recursivas
// =============================

// Torre: movimenta para cima um número de casas
void moverTorre(int casas) {
    if (casas == 0) return; // caso base
    printf("Cima\n");
    moverTorre(casas - 1); // chamada recursiva
}

// Bispo com recursividade (diagonal: cima + direita)
void moverBispoRec(int casas) {
    if (casas == 0) return;
    printf("Cima\n");
    printf("Direita\n");
    moverBispoRec(casas - 1);
}

// Rainha: combinação da Torre e Bispo
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Cima\n");
    printf("Direita\n");
    moverRainha(casas - 1);
}

// =============================
// Loops aninhados
// =============================

// Bispo também com loops aninhados
void moverBispoLoops(int casas) {
    for (int v = 0; v < casas; v++) {   // movimento vertical
        printf("Cima\n");
        for (int h = 0; h < casas; h++) { // movimento horizontal
            printf("Direita\n");
        }
    }
}

// Cavalo: duas para cima e uma para a direita
void moverCavalo(int movimentos) {
    int up, right;
    for (up = 0; up < movimentos; up++) {
        for (right = 0; right < movimentos; right++) {
            if (up == 2 && right == 1) {
                printf("Cima\n");
                printf("Cima\n");
                printf("Direita\n");
                break; // sai do loop interno
            }
            if (right > 1) continue; // pula iterações desnecessárias
        }
    }
}

// =============================
// Programa Principal
// =============================
int main() {
    int casas = 3; // número de casas fixo para recursão e loops
    int movimentos = 3; // movimentos para cavalo

    printf("=== Torre (recursiva) ===\n");
    moverTorre(casas);

    printf("\n=== Bispo (recursiva) ===\n");
    moverBispoRec(casas);

    printf("\n=== Bispo (loops aninhados) ===\n");
    moverBispoLoops(2);

    printf("\n=== Rainha (recursiva) ===\n");
    moverRainha(casas);

    printf("\n=== Cavalo (loops complexos) ===\n");
    moverCavalo(movimentos);

    return 0;
}
