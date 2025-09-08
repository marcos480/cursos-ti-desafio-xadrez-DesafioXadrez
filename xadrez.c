#include <stdio.h>

int main() {
    // -------------------------------
    // Movimento da Torre (usando FOR)
    // -------------------------------
    int casasTorre = 5; // número de casas que a torre vai se mover
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }

    // -------------------------------
    // Movimento do Bispo (usando WHILE)
    // -------------------------------
    int casasBispo = 5; // número de casas que o bispo vai se mover
    int contadorBispo = 1;
    printf("\nMovimento do Bispo:\n");
    while (contadorBispo <= casasBispo) {
        printf("Cima, Direita\n");
        contadorBispo++;
    }

    // -------------------------------
    // Movimento da Rainha (usando DO-WHILE)
    // -------------------------------
    int casasRainha = 8; // número de casas que a rainha vai se mover
    int contadorRainha = 1;
    printf("\nMovimento da Rainha:\n");
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha <= casasRainha);

    // -------------------------------
    // Movimento do Cavalo (usando FOR + WHILE aninhados)
    // -------------------------------
    int casasBaixo = 2;    // número de casas para baixo
    int casasEsquerda = 1; // número de casas para esquerda
    printf("\nMovimento do Cavalo:\n");

    // FOR controla os dois movimentos para baixo
    for (int i = 1; i <= casasBaixo; i++) {
        printf("Baixo\n");

        // Dentro do FOR, usamos WHILE para o movimento para esquerda
        // Esse while só executa na última iteração (quando o cavalo já desceu 2 casas)
        if (i == casasBaixo) {
            int contadorEsquerda = 1;
            while (contadorEsquerda <= casasEsquerda) {
                printf("Esquerda\n");
                contadorEsquerda++;
            }
        }
    }

    return 0;
}
