#include <stdio.h>

int main(){

    //Propiedades variáveis:

    char estado_1[3];
    char codigo_1[4], cidade_1[20];
    int pontos_turisticos_1;
    float area_1, pib_1, densidade1, pibpercapita1, superpoder1, inversodensidade1;
    unsigned long int pop_1;

    char estado_2[3];
    char codigo_2[4], cidade_2[20];
    int pontos_turisticos_2;
    float area_2, pib_2, densidade2, pibpercapita2, superpoder2, inversodensidade2;
    unsigned long int pop_2;

    //Cadastro Carta 1:

    printf("\n--- Carta 1 ---\n");
    printf("Digite o Estado: (Uma letra de 'A' a 'H' para representar um dos oito estados).\n");
    scanf("%s", &estado_1);
    printf("Digite o Código: (A letra do estado seguida de um número de 01 a 04 (ex: A01, B03). \n");
    scanf("%s", &codigo_1);
    printf("Digite o nome da Cidade: \n");
    scanf("%s", &cidade_1);
    printf("Digite a População: (Número de habitantes da cidade). \n");
    scanf("%ld", &pop_1);
    printf("Digite a Área km²: \n");
    scanf("%f", &area_1);
    printf("Digite o PIB: \n");
    scanf("%f", &pib_1);
    printf("Digite a quantidade de Pontos Turísticos: \n");
    scanf("%d", &pontos_turisticos_1);

    //Cadastro Carta 2:

    printf("\n--- Carta 2 ---\n");
    printf("Digite o Estado: (Uma letra de 'A' a 'H' para representar um dos oito estados).\n");
    scanf("%s", &estado_2);
    printf("Digite o Código: (A letra do estado seguida de um número de 01 a 04 (ex: A01, B03). \n");
    scanf("%s", &codigo_2);
    printf("Digite o nome da Cidade: \n");
    scanf("%s", &cidade_2);
    printf("Digite a População: (Número de habitantes da cidade). \n");
    scanf("%ld", &pop_2);
    printf("Digite a Área km²: \n");
    scanf("%f", &area_2);
    printf("Digite o PIB: \n");
    scanf("%f", &pib_2);
    printf("Digite a quantidade de Pontos Turísticos: \n");
    scanf("%d", &pontos_turisticos_2);

    //Cálculo das propiedades:
        //Carta 1:
    densidade1 = pop_1 / area_1;
    pibpercapita1 = (float) (pib_1 * 1000000000) / pop_1;
    inversodensidade1 = 1 / densidade1;
    superpoder1 = (float) pop_1 + area_1 + pib_1 + pontos_turisticos_1 + pibpercapita1 + inversodensidade1;
        //Carta 2:
    densidade2 = pop_2 / area_2;
    pibpercapita2 = (float) (pib_2 * 1000000000) / pop_2;
    inversodensidade2 = 1 / densidade2;
    superpoder2 = (float) pop_2 + area_2 + pib_2 + pontos_turisticos_2 + pibpercapita2 + inversodensidade2;

    //Saída cartas cadastradas:

    printf("================================\n");
    printf("||           Carta 1          ||\n");
    printf("================================\n");
    printf("Estado: %s \n", estado_1);
    printf("Código: %s \n", codigo_1);
    printf("Cidade: %s \n", cidade_1);
    printf("População: %d \n", pop_1);
    printf("Área: %.2f km² \n", area_1);
    printf("PIB: %.2f bilhões de reais \n", pib_1);
    printf("Número de Pontos Turísticos: %d \n", pontos_turisticos_1);
    printf("Densidade Populacional: %.2f hab/km² \n", densidade1);
    printf("PIB per Capita: %.2f reais \n", pibpercapita1);
    printf("Super Poder: %.2f \n", superpoder1);

    printf("===============================\n");
    printf("||          Carta 2          ||\n");
    printf("===============================\n");
    printf("Estado: %s \n", estado_2);
    printf("Código: %s \n", codigo_2);
    printf("Cidade: %s \n", cidade_2);
    printf("População: %d \n", pop_2);
    printf("Área: %.2f km² \n", area_2);
    printf("PIB: %.2f bilhões de reais \n", pib_2);
    printf("Número de Pontos Turísticos: %d \n", pontos_turisticos_2);
    printf("Densidade Populacional: %.2f hab/km² \n", densidade2);
    printf("PIB per Capita: %.2f reais \n", pibpercapita2);
    printf("Super Poder: %.2f \n", superpoder2);

    //Comparação - Menu de escolhas:
    
    printf("======================================\n");
    printf("||      Comparação das Cartas       ||\n");
    printf("======================================\n");
    printf("|| 1. População                     ||\n");
    printf("|| 2. Área                          ||\n");
    printf("|| 3. PIB                           ||\n");
    printf("|| 4. Número de Pontos Turísticos   ||\n");
    printf("|| 5. Densidade Populacional        ||\n");
    printf("|| 6. PIB Percapita                 ||\n");
    printf("|| 7. Super Poder                   ||\n");
    printf("######################################\n");
    printf("||      Digite sua escolha:         ||\n");
    printf("######################################\n");

    int menu1, resultado1;
    scanf("%d", menu1);

    return 0;

}
