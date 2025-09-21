#include <stdio.h>
     
int main() {

    int carta1, carta2;
    char estado1[1], estado2[1];
    char codigo1[3], codigo2[3];
    char cidade1[50], cidade2[50];
    int populacao1, populacao2;
    float area1, area2; 
    float pib1, pib2;
    float densidade1, densidade2;
    float pibpercapita1, pibpercapita2;
    int turistico1, turistico2;
    float superpoder1, superpoder2;
    int opcao;
    int atributo;



    printf("***** Jogo de Super Trunfo - Cidades *****\n");
    printf("1 - Jogar\n");
    printf("2 - Sair\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("Iniciando o jogo...\n");
        printf("\nDigite os dados da primeira cidade:\n");
        printf("Carta: ");
        scanf("%d", &carta1);
        printf("Estado: ");
        scanf("%s", estado1);
        printf("Codigo: ");
        scanf("%s", codigo1);
        printf("Cidade: ");
        scanf("%s", cidade1);
        printf("Populacao: ");
        scanf("%d", &populacao1);
        printf("Area: ");
        scanf("%f", &area1);
        printf("PIB: ");
        scanf("%f", &pib1);
        printf("Quantidade de pontos Turisticos: ");
        scanf("%d", &turistico1);

        densidade1 = populacao1 / area1;
        pibpercapita1 = (pib1 * 1000000000) / populacao1;
        superpoder1 = populacao1 + area1 + pib1 + turistico1 + pibpercapita1 + (1 / densidade1);

        printf("\nDados da primeira cidade:\n");
        printf("Carta: %d\n", carta1);
        printf("Estado: %s\n", estado1);
        printf("Codigo: %s\n", codigo1);
        printf("Cidade: %s\n", cidade1);
        printf("Populacao: %d\n", populacao1);
        printf("Area: %.2f km²\n", area1);
        printf("PIB: %.2f bilhões de reais\n", pib1);
        printf("Quantidade de pontos Turisticos: %d\n", turistico1);
        printf("Densidade demografica: %.2f hab/km²\n", densidade1);
        printf("PIB per capita: %.2f reais\n", pibpercapita1);
        printf("Superpoder: %.2f\n", superpoder1);

        printf("\nDigite os dados da segunda cidade:\n");
        printf("Carta: ");
        scanf("%d", &carta2);
        printf("Estado: ");
        scanf("%s", estado2);
        printf("Codigo: ");
        scanf("%s", codigo2);
        printf("Cidade: ");
        scanf("%s", cidade2);
        printf("Populacao: ");
        scanf("%d", &populacao2);
        printf("Area: ");
        scanf("%f", &area2);
        printf("PIB: ");
        scanf("%f", &pib2);
        printf("Quantidade de pontos Turisticos: ");
        scanf("%d", &turistico2);

        densidade2 = populacao2 / area2;
        pibpercapita2 = (pib2 * 1000000000) / populacao2;
        superpoder2 = populacao2 + area2 + pib2 + turistico2 + pibpercapita2 + (1 / densidade2);

        printf("\nDados da segunda cidade:\n");
        printf("Carta: %d\n", carta2);
        printf("Estado: %s\n", estado2);
        printf("Codigo: %s\n", codigo2);
        printf("Cidade: %s\n", cidade2);
        printf("Populacao: %d\n", populacao2);
        printf("Area: %.2f km²\n", area2);
        printf("PIB: %.2f bilhões de reais\n", pib2);
        printf("Quantidade de pontos Turisticos: %d\n", turistico2);
        printf("Densidade demografica: %.2f hab/km²\n", densidade2);
        printf("PIB per capita: %.2f reais\n", pibpercapita2);
        printf("Superpoder: %.2f\n", superpoder2);


        printf("Escolha qual atributo será comparado\n");
        printf("1 - Populacao\n");
        printf("2 - Area\n");   
        printf("3 - PIB\n");
        printf("4 - Quantidade de pontos Turisticos\n");
        printf("5 - Densidade demografica\n");
        printf("6 - PIB per capita\n");
        printf("7 - Superpoder\n");
        printf("Digite sua escolha: ");
        scanf("%d", &atributo);
        break;
    
    default:
        printf("Saindo do jogo...\n");
        break;
    }
    
    printf("\nComparacao de Cartas:\n");
    switch (atributo)
    {           
    case 1:
        if (populacao1 == populacao2){
            printf("Cidade1: %s - Cidade2: %s\n", cidade1, cidade2);
            printf("Empate: Populacao carta1: %d  - Populacao carta2: %d\n", populacao1 , populacao2);
        }else if (populacao1 > populacao2){
            printf("Cidade1: %s\n", cidade1);
            printf("Populacao: %d - Carta1 Venceu!\n", populacao1);
        }else{
            printf("Cidade2: %s\n", cidade2);
            printf("Populacao: %d - Carta2 Venceu!\n", populacao2);
        }
        break;
    case 2:
       if (area1 == area2){
        printf("Cidade1: %s - Cidade2: %s\n", cidade1, cidade2);
        printf("Empate: Area carta1: %.2F  - Area carta2: %.2F\n", area1 , area2);
        }   
        else if (area1 > area2){
            printf("Cidade1: %s\n", cidade1);
            printf("Area: %.2F - Carta1 Venceu!\n", area1);
        }else{
            printf("Cidade2: %s\n", cidade2);
            printf("Area: %.2F - Carta2 Venceu!\n", area2);
        }   
        break;    
    case 3:
        if (pib1 == pib2){
            printf("Cidade1: %s - Cidade2: %s\n", cidade1, cidade2);
            printf("Empate: PIB carta1: %.2F  - PIB carta2: %.2F\n", pib1 , pib2);
            }else if (pib1 > pib2){   
            printf("Cidade1: %s\n", cidade1);
            printf("PIB: %.2F - Carta1 Venceu!\n", pib1);
        }else{
            printf("Cidade2: %s\n", cidade2);
            printf("PIB: %.2F - Carta2 Venceu!\n", pib2);    
        }
        break;
    case 4:
        if (turistico1 == turistico2){
            printf("Cidade1: %s - Cidade2: %s\n", cidade1, cidade2);
            printf("Empate: Pontos Turisticos carta1: %d  - Pontos Turisticos carta2: %d\n", turistico1 , turistico2);
        }else if (turistico1 > turistico2){
            printf("Cidade1: %s\n", cidade1);
            printf("Quantidade de pontos Turisticos: %d - Carta1 Venceu!\n", turistico1);
        }else{
            printf("Cidade2: %s\n", cidade2);
            printf("Quantidade de pontos Turisticos: %d - Carta2 Venceu!\n", turistico2);
        }
        break;
    case 5:
        if (densidade1 == densidade2){
            printf("Cidade1: %s - Cidade2: %s\n", cidade1, cidade2);
            printf("Empate: Densidade demografica carta1: %.2f  - Densidade demografica carta2: %.2f\n", densidade1 , densidade2);
        }else if (densidade1 < densidade2){   
           printf("Cidade1: %s\n", cidade1);
           printf("Densidade demografica: %.2f - Carta1 Venceu!\n", densidade1);
        }else{  
            printf("Cidade2: %s\n", cidade2);     
            printf("Densidade demografica: %.2f - Carta2 Venceu!\n", densidade2);
        }
        break;
    case 6:
        if (pibpercapita1 == pibpercapita2){
            printf("Cidade1: %s - Cidade2: %s\n", cidade1, cidade2);
            printf("Empate: PIB per capita carta1: %.2f  - PIB per capita carta2: %.2f\n", pibpercapita1 , pibpercapita2);
        }else if (pibpercapita1 > pibpercapita2){
            printf("Cidade1: %s\n", cidade1);
            printf("PIB per capita: %.2f - Carta1 Venceu!\n", pibpercapita1);   
        }else{
            printf("Cidade2: %s\n", cidade2);
            printf("PIB per capita: %.2f - Carta2 Venceu!\n", pibpercapita2);
        }
        break;
    case 7:
        if (superpoder1 == superpoder2){
            printf("Cidade1: %s - Cidade2: %s\n", cidade1, cidade2);
            printf("Empate: Superpoder carta1: %.2f  - Superpoder carta2: %.2f\n", superpoder1 , superpoder2);
        }else if (superpoder1 > superpoder2){
            printf("Cidade1: %s\n", cidade1);
            printf("Superpoder: %.2f - Carta1 Venceu!\n", superpoder1); 
        }else{
            printf("Cidade2: %s\n", cidade2);
            printf("Superpoder: %.2f - Carta2 Venceu!\n", superpoder2);
        }
        break;    
    default:
        printf("Cidade1: %s - Cidade2: %s\n", cidade1, cidade2);
        printf("Atributo invalido!\n");
        break;

}
    
    return 0;
    
}