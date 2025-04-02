#include <stdio.h>

int main() {
    char pais[20], pais2[20];
    int populacao, populacao2;
    float area, area2;
    float pib, pib2;
    int pontosTuristicos, pontosTuristicos2;
    float densidade, densidade2;
    float perCapita, perCapita2;
    int modo;

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

    printf("\n--- Dados do País ---\n");
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


    printf("\n*** MENU PARA JOGAR ***\n");
    printf("1. Comparar populações\n");
    printf("2. Comparar áreas\n");
    printf("3. Comparar PIB per capita\n");
    printf("4. Comparar quantidade de Pontos Turísticos\n");
    printf("5. Comparar Densidades Demográficas\n");
    printf("Escolha uma opção: ");
    scanf(" %d", &modo);

    printf("%s", pais);

    switch (modo)
    {
        case 1:
        if (populacao > populacao2)
        {
            printf("O País 1 venceu com %d de população\n", populacao);
        } else {
            printf("O País 2 venceu com %d de população\n", populacao2);
        };
        break;

    case 2:
        if(area > area2) {
            printf("O País 1 venceu com %f hab/km² de área\n", area);
        } else {
            printf("O País 2 venceu com %f hab/km² de área\n", area2);
        }
        break;

    case 3:
        if(pib > pib2) {
            printf("O País 1 venceu com %.2f de PIB\n", pib);
        } else {
            printf("O País 2 venceu com %.2f de PIB\n", pib2);
        }
        break;

    case 4:
        if(pontosTuristicos > pontosTuristicos2) {
            printf("O País 1 venceu com %d de Pontos Turísticos\n", pontosTuristicos);
        } else {
            printf("O País 2 venceu com %d de Pontos Turísticos\n", pontosTuristicos2);
        }
        break;

    case 5: 
        if (densidade > densidade2)
        {
            printf("O País 1 venceu com %.3f de Densidade Demográfica\n", densidade);
        } else {
            printf("O País 2 venceu com %.3f de Densidade Demográfica\n", densidade2);
        }
        break;
    
    default: printf("Erro Inesperado!");
        break;
    }
    return 0;
}
