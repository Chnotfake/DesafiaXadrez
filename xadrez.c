#include <stdio.h>

// --- Funções para Simular os Movimentos ---

/**
 * @brief Simula o movimento da Torre em uma direção.
 * * @param linha_inicial A linha onde a peça começa (1 a 8).
 * @param coluna_inicial A coluna onde a peça começa (1 a 8).
 */
void moverTorre(int linha_inicial, int coluna_inicial) {
    printf("--- Movimentos da Torre a partir de (%d, %d) ---\n", linha_inicial, coluna_inicial);
    
    // A Torre se move em linhas retas (horizontal e vertical).
    // Vamos simular o movimento para a direita como exemplo.
    // A linha fica a mesma, a coluna aumenta.
    printf("Movendo para a direita:\n");
    for (int coluna = coluna_inicial + 1; coluna <= 8; coluna++) {
        printf("  Posição: (%d, %d)\n", linha_inicial, coluna);
    }
    // (Você pode adicionar outros 'for' para mover para a esquerda, para cima e para baixo)
    printf("\n");
}

/**
 * @brief Simula o movimento do Bispo em uma direção.
 * * @param linha_inicial A linha onde a peça começa (1 a 8).
 * @param coluna_inicial A coluna onde a peça começa (1 a 8).
 */
void moverBispo(int linha_inicial, int coluna_inicial) {
    printf("--- Movimentos do Bispo a partir de (%d, %d) ---\n", linha_inicial, coluna_inicial);
    
    // O Bispo se move nas diagonais.
    // Vamos simular a diagonal superior direita.
    // Tanto a linha quanto a coluna aumentam.
    printf("Movendo na diagonal superior direita:\n");
    int linha = linha_inicial + 1;
    int coluna = coluna_inicial + 1;
    while (linha <= 8 && coluna <= 8) { // Continua enquanto estiver dentro do tabuleiro
        printf("  Posição: (%d, %d)\n", linha, coluna);
        linha++;
        coluna++;
    }
    // (Você pode adicionar outros 'while' para as outras 3 diagonais)
    printf("\n");
}

/**
 * @brief Simula o movimento da Rainha em uma direção.
 * * @param linha_inicial A linha onde a peça começa (1 a 8).
 * @param coluna_inicial A coluna onde a peça começa (1 a 8).
 */
void moverRainha(int linha_inicial, int coluna_inicial) {
    printf("--- Movimentos da Rainha a partir de (%d, %d) ---\n", linha_inicial, coluna_inicial);
    
    // A Rainha combina os movimentos da Torre e do Bispo.
    // Como exemplo, vamos simular o movimento para a esquerda.
    printf("Movendo para a esquerda:\n");
    for (int coluna = coluna_inicial - 1; coluna >= 1; coluna--) {
        printf("  Posição: (%d, %d)\n", linha_inicial, coluna);
    }
    // (A Rainha também se moveria nas outras 7 direções)
    printf("\n");
}

/**
 * @brief Simula o movimento do Cavalo.
 * * @param linha_inicial A linha onde a peça começa (1 a 8).
 * @param coluna_inicial A coluna onde a peça começa (1 a 8).
 */
void moverCavalo(int linha_inicial, int coluna_inicial) {
    printf("--- Movimentos do Cavalo a partir de (%d, %d) ---\n", linha_inicial, coluna_inicial);
    
    // O Cavalo se move em "L": 2 casas em uma direção e 1 em uma direção perpendicular.
    // Podemos pré-definir os 8 movimentos possíveis.
    int movimentos_l[] = {-2, -1, 1, 2, 2, 1, -1, -2};
    int movimentos_c[] = {1, 2, 2, 1, -1, -2, -2, -1};
    
    printf("Movimentos possíveis em 'L':\n");
    for (int i = 0; i < 8; i++) {
        int nova_linha = linha_inicial + movimentos_l[i];
        int nova_coluna = coluna_inicial + movimentos_c[i];
        
        // Condição para verificar se o movimento é válido (dentro do tabuleiro)
        if (nova_linha >= 1 && nova_linha <= 8 && nova_coluna >= 1 && nova_coluna <= 8) {
            printf("  Posição: (%d, %d)\n", nova_linha, nova_coluna);
        }
    }
    printf("\n");
}


// --- Programa Principal ---

int main() {
    // Posição inicial das peças para o teste.
    // Vamos imaginar as peças em posições centrais para ter mais movimentos.
    int linha_inicial = 4;
    int coluna_inicial = 4;

    printf("Simulação de Movimentos de Xadrez\n");
    printf("Posição Inicial para teste: (%d, %d)\n\n", linha_inicial, coluna_inicial);

    // --- Nível Novato: Movimentos com Loops Simples ---
    // Chamamos as funções para mostrar os movimentos das peças.
    
    moverTorre(linha_inicial, coluna_inicial);
    moverBispo(linha_inicial, coluna_inicial);
    moverRainha(linha_inicial, coluna_inicial);

    // --- Nível Aventureiro: Movimento do Cavalo ---
    // O movimento do cavalo é mais complexo e não segue uma linha reta.
    
    moverCavalo(linha_inicial, coluna_inicial);
    
    // --- Nível Mestre: Funções e Condições ---
    printf("--- Nível Mestre ---\n");
    printf("O código acima já está estruturado em funções, que é o primeiro passo para o 'Nível Mestre'.\n");
    printf("A função 'moverCavalo' também já usa condições para garantir que a peça não saia do tabuleiro.\n");
    printf("O próximo passo seria transformar o movimento do Bispo/Torre em recursivo.\n");
    printf("Por exemplo, uma função 'moverBispoRecursivo(l, c)' se chamaria novamente com 'moverBispoRecursivo(l+1, c+1)' até sair do tabuleiro.\n");

    return 0;
}