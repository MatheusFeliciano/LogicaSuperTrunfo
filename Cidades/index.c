#include <stdio.h>



int main() {
    // Cidade 1

    // Receber os dados de duas cartas
    char cidade[20];
    char codigo;
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float superPoder;
    float densidade;

    printf("Informe o nome da sua cidade: \n");
    scanf(" %s", cidade);

    printf("Atribua um código a sua cidade: \n");
    scanf(" %s", &codigo);  

    printf("Informe a população da sua cidade: \n");
    scanf(" %d", &populacao);

    printf("Informe a área da sua cidade: \n");
    scanf(" %f", &area);
    
    printf("Informe o PIB: \n");
    scanf(" %f", &pib);

    printf("Informe o número de pontos turísticos: \n");
    scanf(" %d", &pontosTuristicos);

    superPoder = populacao + area + pib + pontosTuristicos;
    densidade = ((float) populacao / area) * 1000; //Calcular Densidade Populacional

    printf("\n--- Dados da Cidade 1 ---\n");
    printf("Cidade: %s\n", cidade);
    printf("Código: %c\n", codigo);
    printf("População: %d\n", populacao);
    printf("Área: %.2f\n", area);
    printf("PIB per capita: %.2f\n", (pib * 1000000000) / populacao); //Calcular PIB per capita
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos);
    printf("A Densidade Demográfica da sua cidade é: %.2f\n", densidade);
    printf("Super-Poder: %.2f\n", superPoder);

    
    // Cidade 2
    char cidade2[20];
    char codigo2;
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float superPoder2;
    float densidade2;
    
    printf("Informe o nome da sua segunda cidade: \n");
    scanf(" %s", cidade2);
    
    printf("Atribua um código a sua segunda cidade: \n");
    scanf(" %s", &codigo2);
    
    printf("Informe a população da sua segunda cidade: \n");
    scanf(" %d", &populacao2);
    
    printf("Informe a área da sua segunda cidade: \n");
    scanf(" %f", &area2);
    
    printf("Informe o PIB: \n");
    scanf(" %f", &pib2);
    
    printf("Informe o número de pontos turísticos: \n");
    scanf(" %d", &pontosTuristicos2);
    
    superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2;
    densidade2 = ((float) populacao2 / area2) * 1000;
    printf("\n--- Dados da Cidade 2 ---\n");
    printf("Cidade: %s\n", cidade2);
    printf("Código: %c\n", codigo2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB per capita: %.2f\n", (pib2 * 1000000000) / populacao2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("A Densidade Demográfica da sua cidade é: %.2f\n", densidade2);
    printf("Super-Poder: %.2f\n", superPoder2);
    
    if (superPoder < superPoder2) {
        printf("Vitória da Carta 2\n");
    } else if (superPoder > superPoder2) {
        printf("Vitória da Carta 1\n");
    } else {
        printf("Empate!\n");
    }
    
    if (densidade < densidade2)
    {
        printf("A Carta 1 venceu em densidade\n");
    } else {
        printf("A Carta 2 venceu em densidade\n");
    }
    
    // Comparar um atributo escolhido
    if (populacao > populacao2)
    {
        printf("População da Cidade 1: %d\n", populacao);
        printf("População da Cidade 2: %d\n", populacao2);
        printf("A Cidade 1 venceu!");
    } else {
        printf("População da Cidade 1: %d\n", populacao);
        printf("População da Cidade 2: %d\n", populacao2);
        printf("A Cidade 2 venceu!");
    }
    
    
    return 0;
}

