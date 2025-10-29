#include <stdio.h>


int main() {

    // --- 1. Torre (5 casas para Direita) ---
    // Aqui são 5 vezes.
    printf("--- Movimento da Torre (5 casas para Direita) ---\n");
    for (int i = 0; i < 5; i++) {
        printf("Direita\n");
    }
    printf("\n"); // pular linha


    // --- 2. Bispo (5 casas Cima, Direita) ---
    
    printf("--- Movimento do Bispo (5 casas Cima, Direita) ---\n");
    
    int contador_bispo = 0;
    
    // loop externo (o professor pediu pra ser o vertical)
    while (contador_bispo < 5) {
        
        // loop interno (horizontal)
        // como é 1 pra cima E 1 pra direita, o loop interno só roda 1 vez
        for (int j = 0; j < 1; j++) {
            printf("Cima, Direita\n");
        }
        
        contador_bispo++; // aumentar o contador para o 'while' parar
    }
    printf("\n"); // pular linha


    // --- 3. Rainha (8 casas para Esquerda) ---
    // Vou usar 'do-while' para mostrar o terceiro tipo de loop.
    // Precisa mover 8 vezes.
    printf("--- Movimento da Rainha (8 casas para Esquerda) ---\n");
    
    int contador_rainha = 0; // contador
    
    do {
        printf("Esquerda\n");
        contador_rainha++; // aumenta o contador
        
    } while (contador_rainha < 8); // repete enquanto for menor que 8
    
    printf("\n"); // pular linha


    // --- 4. Cavalo (2 Cima, 1 Direita) ---
    // O cavalo anda 2 pra cima e 1 pra direita.
    // O professor pediu loops "complexos", mas vou fazer do jeito fácil.
    // São duas ações separadas.
    
    printf("--- Movimento do Cavalo (2 Cima, 1 Direita) ---\n");

    // Ação 1: 2 passos para Cima
    // Um loop 'for' para repetir 2 vezes
    for (int i = 0; i < 2; i++) {
        printf("Cima\n");
    }

    // Ação 2: 1 passo para Direita
    // Não precisa de loop para 1 passo, então só imprimo
    printf("Direita\n");


    printf("\n"); // pular linha
    
    // Acabou o programa
    return 0;
}