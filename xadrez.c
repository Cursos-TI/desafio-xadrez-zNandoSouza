#include <stdio.h>
// Aluno: Fernando Souza de Araujo.
// Desafio Nível Mestre - Xadrez - Movimentos Complexos e Recursividade

// ------------------ TORRE (Recursiva) ------------------
void moverTorreDireita(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorreDireita(casas - 1);
}

// ------------------ BISPO (Recursiva) ------------------
void moverBispoRecursivo(int casas) {
    if (casas == 0) return;
    printf("Diagonal Cima Direita\n");
    moverBispoRecursivo(casas - 1);
}

// ------------------ BISPO (Loops Aninhados) ------------------
void moverBispoLoops(int casas) {
    for (int i = 0; i < casas; i++) { // vertical
        for (int j = 0; j < casas; j++) { // horizontal
            if (i == j) {
                printf("Diagonal Cima Direita\n");
            }
        }
    }
}

// ------------------ RAINHA (Recursiva) ------------------
void moverRainhaEsquerda(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainhaEsquerda(casas - 1);
}

// ------------------ CAVALO (Loops Complexos) ------------------
void moverCavaloL() {
    // Movimento para cima (2) e direita (1)
    for (int cima = 0; cima <= 2; cima++) {
        for (int direita = 0; direita <= 1; direita++) {
            if (cima == 2 && direita == 1) {
                printf("Cavalo em L: 2 para cima, 1 para direita\n");
                break;
            }
            if (cima + direita < 2) continue;
        }
    }
}

int main() {
    // Quantidade de casas que cada peça se moverá
    const int casasTorre = 5;
    const int casasBispo = 4;
    const int casasRainha = 8;

    printf("==!! Movendo a TORRE (Recursiva) !!==\n");
    moverTorreDireita(casasTorre);
    printf("\n");

    printf("==!! Movendo o BISPO (Recursiva) !!==\n");
    moverBispoRecursivo(casasBispo);
    printf("\n");

    printf("==!! Movendo o BISPO (Loops Aninhados) !!==\n");
    moverBispoLoops(casasBispo);
    printf("\n");

    printf("==!! Movendo a RAINHA (Recursiva) !!==\n");
    moverRainhaEsquerda(casasRainha);
    printf("\n");

    printf("==!! Movendo o CAVALO (Loops Complexos) !!==\n");
    moverCavaloL();
    printf("\n");

    return 0;
}
