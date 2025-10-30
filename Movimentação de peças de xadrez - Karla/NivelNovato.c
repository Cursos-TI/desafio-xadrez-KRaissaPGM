#include <stdio.h>

int main() {
    // ==========================
    // MOVIMENTO DA TORRE (for)
    // ==========================
    // A torre move-se em linha reta — neste caso, 5 casas para a direita
    int casasTorre = 5;
    printf("Movimento da TORRE:\n");
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita (%d)\n", i);
    }
    printf("\n");

    // ==========================
    // MOVIMENTO DO BISPO (while)
    // ==========================
    // O bispo move-se na diagonal — neste caso, 5 casas para cima e à direita
    int casasBispo = 5;
    int contadorBispo = 1;
    printf("Movimento do BISPO:\n");
    while (contadorBispo <= casasBispo) {
        printf("Cima, Direita (%d)\n", contadorBispo);
        contadorBispo++;
    }
    printf("\n");

    // ==========================
    // MOVIMENTO DA RAINHA (do-while)
    // ==========================
    // A rainha pode se mover em qualquer direção — aqui, 8 casas para a esquerda
    int casasRainha = 8;
    int contadorRainha = 1;
    printf("Movimento da RAINHA:\n");
    do {
        printf("Esquerda (%d)\n", contadorRainha);
        contadorRainha++;
    } while (contadorRainha <= casasRainha);

    // Fim do programa
    return 0;
}