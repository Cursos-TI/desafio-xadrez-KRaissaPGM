#include <stdio.h>

int main() {
    // ==========================
    // MOVIMENTO DA TORRE (for)
    // ==========================
    // A torre move-se em linha reta — 5 casas para a direita
    int casasTorre = 5;
    printf("Movimento da TORRE:\n");
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita (%d)\n", i);
    }
    printf("\n");

    // ==========================
    // MOVIMENTO DO BISPO (while)
    // ==========================
    // O bispo move-se na diagonal — 5 casas para cima e à direita
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
    // A rainha move-se em qualquer direção — 8 casas para a esquerda
    int casasRainha = 8;
    int contadorRainha = 1;
    printf("Movimento da RAINHA:\n");
    do {
        printf("Esquerda (%d)\n", contadorRainha);
        contadorRainha++;
    } while (contadorRainha <= casasRainha);
    printf("\n");

    // ==========================
    // MOVIMENTO DO CAVALO (loops aninhados)
    // ==========================
    // O cavalo move-se em "L": duas casas para baixo e uma para a esquerda.
    // Vamos usar:
    //  - Loop externo (for): para as duas casas para baixo
    //  - Loop interno (while): para a casa à esquerda
    int movimentosBaixo = 2;
    int movimentosEsquerda = 1;

    printf("Movimento do CAVALO:\n");

    // Loop externo controla as duas casas para baixo
    for (int i = 1; i <= movimentosBaixo; i++) {
        printf("Baixo (%d)\n", i);
    }

    // Loop interno controla o movimento final (1 casa para a esquerda)
    int contadorEsquerda = 1;
    while (contadorEsquerda <= movimentosEsquerda) {
        printf("Esquerda (%d)\n", contadorEsquerda);
        contadorEsquerda++;
    }

    // Fim do programa
    return 0;
}