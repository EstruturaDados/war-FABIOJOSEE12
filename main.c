#include <stdio.h>   
#include <string.h>  

// Quantidade de territórios
#define TOTAL_TERRITORIOS 5

// Definição da struct 
typedef struct {
    char nome[30];   // Nome do território
    char cor[20];    // Cor do exército dominante
    int tropas;      // Número de tropas
} Territorio;

int main() {

    // Vetor estático para armazenar 5 territórios
    Territorio territorios[TOTAL_TERRITORIOS];

    int i;

    // Título do programa
    printf("=== Cadastro de Territorios ===\n\n");

    // Cadastro dos territórios
    for (i = 0; i < TOTAL_TERRITORIOS; i++) {

        printf("Territorio %d\n", i + 1);

        // Leitura do nome do território
        printf("Digite o nome do territorio: ");
        fgets(territorios[i].nome, sizeof(territorios[i].nome), stdin);
        territorios[i].nome[strcspn(territorios[i].nome, "\n")] = '\0';

        // Leitura da cor do exército
        printf("Digite a cor do exercito: ");
        fgets(territorios[i].cor, sizeof(territorios[i].cor), stdin);
        territorios[i].cor[strcspn(territorios[i].cor, "\n")] = '\0';

        // Leitura do número de tropas
        printf("Digite o numero de tropas: ");
        scanf("%d", &territorios[i].tropas);

        // Limpa o buffer do teclado
        getchar();

        printf("\n");
    }

    // Exibição do estado atual do mapa
    printf("=== Estado Atual do Mapa ===\n\n");

    for (i = 0; i < TOTAL_TERRITORIOS; i++) {
        printf("Territorio %d\n", i + 1);
        printf("Nome: %s\n", territorios[i].nome);
        printf("Cor do Exercito: %s\n", territorios[i].cor);
        printf("Numero de Tropas: %d\n", territorios[i].tropas);
        printf("----------------------------\n");
    }

    return 0; // Finaliza o programa
}
