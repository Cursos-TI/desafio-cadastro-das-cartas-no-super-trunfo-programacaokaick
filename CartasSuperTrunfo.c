#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.

int main() {
// Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

// Variáveis:

    char estado_1;
    char codigo_1[4], cidade_1[20];
    int pop_1, pontos_turisticos_1;
    float area_1, pib_1;

    char estado_2;
    char codigo_2[4], cidade_2[20];
    int pop_2, pontos_turisticos_2;
    float area_2, pib_2;

// Cadastro Carta 1:

    printf("\n--- Carta 1 ---\n");
    printf("Digite o Estado: (Uma letra de 'A' a 'H' para representar um dos oito estados).\n");
    scanf("%s", &estado_1);

    printf("Digite o Código: (A letra do estado seguida de um número de 01 a 04 (ex: A01, B03). \n");
    scanf("%s", &codigo_1);

    printf("Digite o nome da Cidade: \n");
    scanf("%s", &cidade_1);

    printf("Digite a População: (Número de habitantes da cidade). \n");
    scanf("%d", &pop_1);

    printf("Digite a Àrea km²: \n");
    scanf("%f", &area_1);

    printf("Digite o PIB: \n");
    scanf("%f", &pib_1);

    printf("Digite a quantidade de Pontos Turísticos: \n");
    scanf("%d", &pontos_turisticos_1);
  
// Cadastro Carta 2:

    printf("\n--- Carta 2 ---\n");
    printf("Digite o Estado: (Uma letra de 'A' a 'H' para representar um dos oito estados).\n");
    scanf("%s", &estado_2);

    printf("Digite o Código: (A letra do estado seguida de um número de 01 a 04 (ex: A01, B03). \n");
    scanf("%s", &codigo_2);

    printf("Digite o nome da Cidade: \n");
    scanf("%s", &cidade_2);

    printf("Digite a População: (Número de habitantes da cidade). \n");
    scanf("%d", &pop_2);

    printf("Digite a Àrea km²: \n");
    scanf("%f", &area_2);

    printf("Digite o PIB: \n");
    scanf("%f", &pib_2);
    
    printf("Digite a quantidade de Pontos Turísticos: \n");
    scanf("%d", &pontos_turisticos_2);

// Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
// Exibição dos Dados das Cartas:

    return 0;
}
