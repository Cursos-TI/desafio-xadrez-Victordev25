#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.


// =================================
// FUNÇÃO RECURSIVA PARA O BISPO
// Movimento: 5 casas na diagonal superior direita
// =================================
void moverBispo(int passos) {
    if (passos == 0) {
        return; // Condição de parada da recursão
    }

    printf("Cima\n");
    printf("Direita\n");

    // Chama a si mesma até acabar os passos
    moverBispo(passos - 1);
}



int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    const int Bispo = 5, Torre = 5, Rainha = 8;


    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

      // ==============================
    // MOVIMENTO DO BISPO (DIAGONAL SUPERIOR DIREITA)
    // Usando loop FOR
    // OBS: Como não temos comando direto de diagonal, 
    // combinamos "Cima" + "Direita"
    // ==============================
    printf("=== Movimento do Bispo (5 casas, diagonal superior direita) ===\n");
    for (int i = 1; i <= Bispo; i++) {
        printf("Cima\n");
        printf("Direita\n");
    }





    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
     // ==============================
    // MOVIMENTO DA TORRE (DIREITA)
    // Usando loop WHILE
    // ==============================
    printf("\n=== Movimento da Torre (5 casas para a direita) ===\n");
    int j = 1;
    while (j <= Torre) {
        printf("Direita\n");
        j++;
    }




    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    // ==============================
    // MOVIMENTO DA RAINHA (ESQUERDA)
    // Usando loop DO...WHILE
    // ==============================
    printf("\n=== Movimento da Rainha (8 casas para a esquerda) ===\n");
    int k = 1;
    do {
        printf("Esquerda\n");
        k++;
    } while (k <= Rainha);





    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    const int cavalo_Esquerda = 1, cavalo_Baixo = 2;
    
      // MOVIMENTO DO CAVALO EM L
    // Usando loops aninhados:
    // - FOR externo (para o movimento vertical - para baixo)
    // - WHILE interno (para o movimento horizontal - para a esquerda)
    // ==============================
    printf("\n=== Movimento do Cavalo (em L: 2 para baixo + 1 para esquerda) ===\n");

    // Loop externo: controla as 2 casas para baixo
    for (int i = 1; i <= cavalo_Baixo; i++) {
        printf("Baixo\n"); // Movimento vertical

        // Loop interno: controla a 1 casa para a esquerda
        int j = 1;
        while (j <= cavalo_Esquerda) {
            printf("Esquerda\n"); // Movimento horizontal
            j++;
        }
    }







    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    // ==============================
    // MOVIMENTO DO BISPO (RECURSIVO)
    // ==============================
    const int BISPO_PASSOS = 5;
    printf("=== Movimento do Bispo (função recursiva) ===\n");
    moverBispo(BISPO_PASSOS);

    // ==============================
    // MOVIMENTO DO CAVALO (LOOPS AVANÇADOS)
    // Movimento em L: 2 para baixo + 1 para esquerda
    // ==============================
    const int PASSOS_BAIXO = 2;
    const int PASSOS_ESQUERDA = 1;

    printf("\n=== Movimento do Cavalo (loops avançados) ===\n");

    // Loop externo: movimento vertical e horizontal controlados juntos
    for (int i = 1, j = 0; i <= PASSOS_BAIXO || j < PASSOS_ESQUERDA; i++, j++) {
        // Caso o índice vertical já tenha acabado, mas o horizontal ainda não:
        if (i > PASSOS_BAIXO && j < PASSOS_ESQUERDA) {
            printf("Esquerda\n");
            continue; // Pula direto para próxima iteração
        }

        // Caso o índice horizontal já tenha acabado, mas o vertical ainda não:
        if (j >= PASSOS_ESQUERDA && i <= PASSOS_BAIXO) {
            printf("Baixo\n");
            continue;
        }

        // Movimento normal do cavalo
        if (i <= PASSOS_BAIXO) {
            printf("Baixo\n");
        }
        if (j < PASSOS_ESQUERDA) {
            printf("Esquerda\n");
        }

        // Condição para encerrar o loop mais cedo (quando completou o L)
        if (i == PASSOS_BAIXO && j == PASSOS_ESQUERDA) {
            break;
        }
    }


    return 0;
}
