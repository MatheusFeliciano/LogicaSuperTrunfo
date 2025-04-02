#include <stdio.h>

int main() {
    char pais[20], pais2[20];
    int populacao, populacao2;
    float area, area2;
    float pib, pib2;
    int pontosTuristicos, pontosTuristicos2;
    float densidade, densidade2;
    float perCapita, perCapita2;
    int atributo1, atributo2;
    float valor1_pais1, valor1_pais2, valor2_pais1, valor2_pais2;
    float soma_pais1, soma_pais2;

    printf("Informe o nome do seu país: ");
    scanf(" %s", pais); 
    printf("Informe a população desse país: ");
    scanf(" %d", &populacao);
    printf("Informe o PIB: ");
    scanf(" %f", &pib);
    printf("Informe a quantidade de Pontos Turísticos: ");
    scanf(" %d", &pontosTuristicos);
    printf("Informe a área desse país: ");
    scanf(" %f", &area);
    
    densidade = populacao / area;
    perCapita = pib / populacao;
    
    printf("\n--- Dados do País 1 ---\n");
    printf("País: %s\n", pais);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB per capita: %.2f\n", perCapita);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos);
    printf("Densidade Demográfica: %.3f hab/km²\n", densidade);
    
    printf("Informe o nome do segundo país: ");
    scanf("%s", pais2);
    printf("Informe a população desse país: ");
    scanf(" %d", &populacao2);
    printf("Informe o PIB: ");
    scanf(" %f", &pib2);
    printf("Informe a quantidade de Pontos Turísticos: ");
    scanf(" %d", &pontosTuristicos2);
    printf("Informe a área desse país: ");
    scanf(" %f", &area2);

    densidade2 = populacao2 / area2;
    perCapita2 = pib2 / populacao2;

    printf("\n--- Dados do País 2 ---\n");
    printf("País: %s\n", pais2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB per capita: %.2f\n", perCapita2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Demográfica: %.3f hab/km²\n", densidade2);
    
    printf("\n*** ESCOLHA O PRIMEIRO ATRIBUTO ***\n");
    printf("1. Populações\n");
    printf("2. Áreas\n");
    printf("3. PIB per capita\n");
    printf("4. Quantidade de Pontos Turísticos\n");
    printf("5. Densidades Demográficas\n");
    printf("Escolha uma opção: ");
    scanf(" %d", &atributo1);
    
    printf("\n*** ESCOLHA O SEGUNDO ATRIBUTO ***\n");
    printf("1. Populações\n");
    printf("2. Áreas\n");
    printf("3. PIB per capita\n");
    printf("4. Quantidade de Pontos Turísticos\n");
    printf("5. Densidades Demográficas\n");
    printf("Escolha uma opção: ");
    scanf(" %d", &atributo2);
    

    switch (atributo1) {
        case 1: 
        valor1_pais1 = populacao; 
        valor1_pais2 = populacao2; break;
        case 2: 
        valor1_pais1 = area; 
        valor1_pais2 = area2; break;
        case 3: 
        valor1_pais1 = perCapita; 
        valor1_pais2 = perCapita2; break;
        case 4: 
        valor1_pais1 = pontosTuristicos; 
        valor1_pais2 = pontosTuristicos2; break;
        case 5: 
        valor1_pais1 = densidade; 
        valor1_pais2 = densidade2; break;
    }
    
    switch (atributo2) {
        case 1: 
        valor2_pais1 = populacao; 
        valor2_pais2 = populacao2; break;
        case 2: 
        valor2_pais1 = area; 
        valor2_pais2 = area2; break;
        case 3: 
        valor2_pais1 = perCapita; 
        valor2_pais2 = perCapita2; break;
        case 4: 
        valor2_pais1 = pontosTuristicos; 
        valor2_pais2 = pontosTuristicos2; break;
        case 5: 
        valor2_pais1 = densidade; 
        valor2_pais2 = densidade2; break;
    }
    
    
    soma_pais1 = valor1_pais1 + valor2_pais1;
    soma_pais2 = valor2_pais1 + valor2_pais2;
    
    
    

    if (soma_pais1 > soma_pais2 || densidade < densidade2) {
        printf("%s venceu a rodada!\n", pais);
    } else if (soma_pais2 > soma_pais1 || densidade2 < densidade) {
        printf("%s venceu a rodada!\n", pais2);
    } else {
        printf("Empate!\n");
    }

    return 0;
}
