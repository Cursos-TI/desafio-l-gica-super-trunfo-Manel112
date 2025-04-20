#include <stdio.h>
#include <string.h>

int main (){
    char estado, estado2;
    char codigo[5], codigo2[5];
    char cidade[50], cidade2[50];
    unsigned long int populacao, populacao2;
    float area, area2;
    float pib, pib2;
    int pontos_turisticos, pontos_turisticos2;
    float super_poder, super_poder2;
    

    //Carta 1

    //Estado
    printf("Digite uma letra de A a H: ");
    scanf("%c", &estado);
    

    // Codigo
    printf("Digite a letra da cidade e um numero de 01 a 04 para o codigo da cidade: ");
    scanf("%s", &codigo);
    getchar(); //  <- limpa o buffer antes do fgets

    //Cidade
    printf("Digite uma cidade: ");
    fgets(cidade, 50, stdin);
    cidade[strcspn(cidade, "\n")] = '\0';
    

    //População
    printf("Digite o numero da populacao: ");
    scanf("%d", &populacao);
    getchar();

    //Area em km²
    printf("Digite a area territorial: ");
    scanf("%f", &area);
    getchar();

    //PIB
    printf("Digite o PIB: ");
    scanf("%f", &pib);
    getchar();

    //Pontos turísticos
    printf("Quantos pontos turisticos tem na cidade?: ");
    scanf("%d", &pontos_turisticos);
    getchar();

    
     

    //Carta 2
    //Estado
    printf("Digite uma letra de A a H: ");
    scanf("%c", &estado2);
    

    // Codigo
    printf("Digite a letra da cidade e um numero de 01 a 04 para o codigo da cidade: ");
    scanf("%s", &codigo2);
    getchar(); //  <- limpa o buffer antes do fgets

    //Cidade
    printf("Digite uma cidade: ");
    fgets(cidade2, 50, stdin);
    cidade2[strcspn(cidade2, "\n")] = '\0';
    

    //População
    printf("Digite o numero da populacao: ");
    scanf("%d", &populacao2);
    getchar();
    
    //Area em km²
    printf("Digite a area territorial: ");
    scanf("%f", &area2);
    getchar();

    //PIB
    printf("Digite o PIB: ");
    scanf("%f", &pib2);
    getchar();

    //Pontos turísticos
    printf("Quantos pontos turisticos tem na cidade?: ");
    scanf("%d", &pontos_turisticos2);
    getchar();

    //Cálculo da Densidade Populacional
    float densidade_populacional = populacao / area;
    float densidade_populacional2 = populacao2 / area2;
    
    //Cálculo do PIB per Capita
    float pib_per_capita = pib / populacao;
    float pib_per_capita2 = pib2 / populacao2;

    //Cálculo do Super Poder
    super_poder = (float) populacao + area + pib + (float) pontos_turisticos + pib_per_capita 
        + (1/densidade_populacional);
    
    super_poder2 = (float) populacao2 + area2 + pib2 + (float) pontos_turisticos2 + pib_per_capita2
        + (float) (1/densidade_populacional2);
    
    //Mostrado na tela
    // Carta 1
    printf("\nCarta 1\n");
    printf("Estado: %c\n", estado);
    printf("Codigo: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("Populacao: %d\n", populacao);
    printf("Area: %.2f km²\n", area);
    printf("PIB: %.2f bilhoes de reais\n", pib);
    printf("Numero de pontos turisticos: %d\n", pontos_turisticos);
    printf("Densidade populacional: %.2f\n", densidade_populacional);
    printf("PIB per Capita: %.2f\n", pib_per_capita);
    printf("Super Poder: %.2f\n", super_poder);
    // Carta 2
    printf("\nCarta 2\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de pontos turisticos: %d\n", pontos_turisticos2);
    printf("Densidade populacional: %.2f\n", densidade_populacional2);
    printf("PIB per Capita: %.2f\n", pib_per_capita2);
    printf("Super Poder: %.2f\n", super_poder2);

    //Menu Interativo
    int opcao;

    printf("Escolha duas opções de comparação: \n");
    printf("1. Nome do país\n");
    printf("2. População\n");
    printf("3. Área\n");
    printf("4. PIB\n");
    printf("5. Numero de Pontos Turísticos\n");
    printf("6. Densidade Demográfica\n");
    scanf("%d", &opcao);

    switch(opcao) {
        case 1:
        printf("Cidade 1: %s\n Cidade 2: %s", cidade, cidade2);
        break;
        case 2:
        printf("\nComparação de Cartas (Atributo População): \n");
        printf("Carta 1 - (%s): %d\n", cidade, populacao);
        printf("Carta 2 - (%s): %d\n", cidade2, populacao2);
        if (populacao > populacao2) {
        printf("Carta 1 (%s), venceu!\n", cidade);
        }
        else if (populacao == populacao2){
            printf("Empate!");
        }
        else {
        printf("Carta 2 (%s), venceu!\n", cidade2);
        }
        break;
        case 3: 
        printf("\nComparação de Cartas (Atributo Área): \n");
        printf("Carta 1 - (%s): %f\n", cidade, area);
        printf("Carta 2 - (%s): %f\n", cidade2, area2);
        if (area > area2) {
            printf("Carta 1 (%s), venceu!\n", cidade);
        }
        else if (area == area2){
            printf("Empate!");
        }
        else {
            printf("Carta 2 (%s), venceu!\n", cidade2);
        }
        break;
        case 4:
        printf("\nComparação de Cartas (Atributo PIB): \n");
        printf("Carta 1 - (%s): %f\n", cidade, pib);
        printf("Carta 2 - (%s): %f\n", cidade2, pib2);
        if (pib > pib2) {
            printf("Carta 1 (%s), venceu!\n", cidade);
        }
        else if (pib == pib2){
            printf("Empate!");
        }
        else {
            printf("Carta 2 (%s), venceu!\n", cidade2);
        }
        break;
        case 5:
        printf("\nComparação de Cartas (Atributo Pontos Turísticos): \n");
        printf("Carta 1 - (%s): %d\n", cidade, pontos_turisticos);
        printf("Carta 2 - (%s): %d\n", cidade2, pontos_turisticos2);
        if (pontos_turisticos > pontos_turisticos2) {
          printf("Carta 1 (%s), venceu!\n", cidade);
          }
        else if (pontos_turisticos == pontos_turisticos2){
            printf("Empate!");
        }
        else {
            printf("Carta 2 (%s), venceu!\n", cidade2);
            }
        break;
        case 6:
        printf("\nComparação de Cartas (Atributo Densidade Populacional): \n");
        printf("Carta 1 - (%s): %f\n", cidade, densidade_populacional);
        printf("Carta 2 - (%s): %f\n", cidade2, densidade_populacional2);
        if (densidade_populacional < densidade_populacional2) {
        printf("Carta 1 (%s), venceu!\n", cidade);
        }
        else if (densidade_populacional == densidade_populacional2){
            printf("Empate!");
        }
        else {
        printf("Carta 2 (%s), venceu!\n", cidade2);
        }
        break;
        default: {
            printf("Digite uma opção válida");
        }
    }

    return 0;
}
