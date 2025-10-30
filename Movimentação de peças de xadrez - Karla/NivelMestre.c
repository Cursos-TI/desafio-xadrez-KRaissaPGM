#include <stdio.h>

// ============================
// Função recursiva: Torre
// ============================
// A Torre move-se em linha reta (5 casas para a direita).
void moverTorre(int passo, int total) {
    if (passo > total) return; // Condição de parada da recursão
    printf("Direita (%d)\n", passo);
    moverTorre(passo + 1, total); // Chamada recursiva
}

// ============================
// Função recursiva + loops aninhados: Bispo
// ============================
// O Bispo move-se na diagonal (5 casas para cima e à direita).
// Loop externo = movimento vertical ("Cima")
// Loop interno = movimento horizontal ("Direita")
void moverBispo(int linha, int total) {
    if (linha > total) return; // Condição de parada da recursão

    for (int col = 1; col <= 1; col++) { // loop horizontal (1 casa por vez)
        printf("Cima, Direita (%d)\n", linha);
    }

    moverBispo(linha + 1, total); // Chamada recursiva
}

// ============================
// Função recursiva: Rainha
// ============================
// A Rainha se move 8 casas para a esquerda.
void moverRainha(int passo, int total) {
    if (passo > total) return; // Condição de parada
    printf("Esquerda (%d)\n", passo);
    moverRainha(passo + 1, total); // Chamada recursiva
}

// ============================
// Função com loops complexos: Cavalo
// ============================
// O Cavalo move-se em "L": duas casas para cima e uma para a direita.
// Aqui usamos loops aninhados com múltiplas variáveis e controle com break/continue.
void moverCavalo() {
    int movimentosCima = 2;
    int movimentosDireita = 1;

    printf("Movimento do CAVALO:\n");

    // Loop externo (para movimento vertical)
    for (int i = 1, j = movimentosCima; i <= movimentosCima && j > 0; i++, j--) {
        printf("Cima (%d)\n", i);

        // Condição especial — se for o último movimento para cima,
        // executa o movimento lateral.
        if (i == movimentosCima) {
            int k = 1;
            while (k <= movimentosDireita) {
                // Podemos usar continue/break para ilustrar controle do fluxo
                if (k == 0) continue; // (só exemplo ilustrativo)
                printf("Direita (%d)\n", k);
                break; // só um movimento lateral
            }
        }
    }
}

// ============================
// Função principal (main)
// ============================
int main() {
    printf("Movimento da TORRE:\n");
    moverTorre(1, 5);
    printf("\n");

    printf("Movimento do BISPO:\n");
    moverBispo(1, 5);
    printf("\n");

    printf("Movimento da RAINHA:\n");
    moverRainha(1, 8);
    printf("\n");

    moverCavalo(); // já imprime internamente

    return 0;
}