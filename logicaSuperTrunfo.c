#include <stdio.h>
     
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
    int atributo1, atributo2;
    int primeiroAtributo, segundoAtributo;
    int resultado1, resultado2;
   

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


        printf("Escolha o primeiro atributo que será comparado!\n");
        printf("1 - Populacao\n");
        printf("2 - Area\n");   
        printf("3 - PIB\n");
        printf("4 - Quantidade de pontos Turisticos\n");
        printf("5 - Densidade demografica\n");
        printf("6 - PIB per capita\n");
        printf("7 - Superpoder\n");
        printf("Digite sua escolha: ");
        scanf("%d", &primeiroAtributo);
        break;
    
    default:
        printf("Saindo do jogo...\n");
        break;
    }
    
    printf("\nComparacao de Cartas:\n");
    switch (primeiroAtributo)
    {           
    case 1:
        printf("Voce escolheu o atributo Populacao\n");
        resultado1 = populacao1 > populacao2 ? 1 : 0;
        break;
    case 2:
        printf("Voce escolheu o atributo Area\n");
        resultado1 = area1 > area2 ? 1 : 0;
        break;    
    case 3:
        printf("Voce escolheu o atributo PIB\n");
        resultado1 = pib1 > pib2 ? 1 : 0;
        break;
    case 4:
        printf("Voce escolheu o atributo Quantidade de pontos Turisticos\n");
        resultado1 = turistico1 > turistico2 ? 1 : 0;
        break;
    case 5:
        printf("Voce escolheu o atributo Densidade demografica\n");
        resultado1 = densidade1 < densidade2 ? 1 : 0;
        break;
    case 6:
        printf("Voce escolheu o atributo PIB per capita\n");
        resultado1 = pibpercapita1 > pibpercapita2 ? 1 : 0;
        break;
    case 7:
        printf("Voce escolheu o atributo Superpoder\n");
        resultado1 = superpoder1 > superpoder2 ? 1 : 0;
        break;    
    default:
        printf("Cidade1: %s - Cidade2: %s\n", cidade1, cidade2);
        printf("Atributo invalido!\n");
        break;

        }
        printf("Escolha o segundo atributo que será comparado!\n");
        printf("1 - Populacao\n");
        printf("2 - Area\n");   
        printf("3 - PIB\n");
        printf("4 - Quantidade de pontos Turisticos\n");
        printf("5 - Densidade demografica\n");
        printf("6 - PIB per capita\n");
        printf("7 - Superpoder\n");
        printf("Digite sua escolha: ");
        scanf("%d", &segundoAtributo);

        if (primeiroAtributo == segundoAtributo)
        {
            printf("Voce deve escolher um atributo diferente!\n");
            printf("Escolha o segundo atributo que será comparado!\n");
            printf("1 - Populacao\n");
            printf("2 - Area\n");   
            printf("3 - PIB\n");
            printf("4 - Quantidade de pontos Turisticos\n");
            printf("5 - Densidade demografica\n");
            printf("6 - PIB per capita\n");
            printf("7 - Superpoder\n");
            printf("Digite sua escolha: ");
            scanf("%d", &segundoAtributo);
                
            switch (segundoAtributo)
        {           
        case 1:
            printf("Voce escolheu o atributo Populacao\n");
            resultado2 = populacao1 > populacao2 ? 1 : 0;
            break;
        case 2:
            printf("Voce escolheu o atributo Area\n");
            resultado2 = area1 > area2 ? 1 : 0;
            break;    
        case 3:
            printf("Voce escolheu o atributo PIB\n");
            resultado2 = pib1 > pib2 ? 1 : 0;
            break;
        case 4:
            printf("Voce escolheu o atributo Quantidade de pontos Turisticos\n");
            resultado2 = turistico1 > turistico2 ? 1 : 0;
            break;
        case 5:
            printf("Voce escolheu o atributo Densidade demografica\n");
            resultado2 = densidade1 < densidade2 ? 1 : 0;
            break;
        case 6:
            printf("Voce escolheu o atributo PIB per capita\n");
            resultado2 = pibpercapita1 > pibpercapita2 ? 1 : 0;
            break;
        case 7:
            printf("Voce escolheu o atributo Superpoder\n");
            resultado2 = superpoder1 > superpoder2 ? 1 : 0;
            break;    
        default:
            printf("Cidade1: %s - Cidade2: %s\n", cidade1, cidade2);
            printf("Atributo invalido!\n");
            break;
        }
        }else{
                    
        switch (segundoAtributo)
        {           
        case 1:
            printf("Voce escolheu o atributo Populacao\n");
            resultado2 = populacao1 > populacao2 ? 1 : 0;
            break;
        case 2:
            printf("Voce escolheu o atributo Area\n");
            resultado2 = area1 > area2 ? 1 : 0;
            break;    
        case 3:
            printf("Voce escolheu o atributo PIB\n");
            resultado2 = pib1 > pib2 ? 1 : 0;
            break;
        case 4:
            printf("Voce escolheu o atributo Quantidade de pontos Turisticos\n");
            resultado2 = turistico1 > turistico2 ? 1 : 0;
            break;
        case 5:
            printf("Voce escolheu o atributo Densidade demografica\n");
            resultado2 = densidade1 < densidade2 ? 1 : 0;
            break;
        case 6:
            printf("Voce escolheu o atributo PIB per capita\n");
            resultado2 = pibpercapita1 > pibpercapita2 ? 1 : 0;
            break;
        case 7:
            printf("Voce escolheu o atributo Superpoder\n");
            resultado2 = superpoder1 > superpoder2 ? 1 : 0;
            break;    
        default:
            printf("Cidade1: %s - Cidade2: %s\n", cidade1, cidade2);
            printf("Atributo invalido!\n");
            break;
        }
        }
        const char* atributo1_str = (primeiroAtributo == 1) ? "Populacao" :
                                    (primeiroAtributo == 2) ? "Area" :
                                    (primeiroAtributo == 3) ? "PIB" :
                                    (primeiroAtributo == 4) ? "Quantidade de pontos Turisticos" :
                                    (primeiroAtributo == 5) ? "Densidade demografica" :
                                    (primeiroAtributo == 6) ? "PIB per capita" :
                                    (primeiroAtributo == 7) ? "Superpoder" : "Atributo invalido";
        
        const char* atributo2_str = (segundoAtributo == 1) ? "Populacao" :
                                    (segundoAtributo == 2) ? "Area" :
                                    (segundoAtributo == 3) ? "PIB" :
                                    (segundoAtributo == 4) ? "Quantidade de pontos Turisticos" :
                                    (segundoAtributo == 5) ? "Densidade demografica" :
                                    (segundoAtributo == 6) ? "PIB per capita" :     
                                    (segundoAtributo == 7) ? "Superpoder" : "Atributo invalido";

        atributo1 = (primeiroAtributo == 1) ? populacao1 :
                    (primeiroAtributo == 2) ? area1 :
                    (primeiroAtributo == 3) ? pib1 :
                    (primeiroAtributo == 4) ? turistico1 :
                    (primeiroAtributo == 5) ? densidade1 :
                    (primeiroAtributo == 6) ? pibpercapita1 :
                    (primeiroAtributo == 7) ? superpoder1 : 0;
        atributo2 = (segundoAtributo == 1) ? populacao2 :
                    (segundoAtributo == 2) ? area2 :
                    (segundoAtributo == 3) ? pib2 :
                    (segundoAtributo == 4) ? turistico2 :
                    (segundoAtributo == 5) ? densidade2 :
                    (segundoAtributo == 6) ? pibpercapita2 :
                    (segundoAtributo == 7) ? superpoder2 : 0;

        if (resultado1 == 1 && resultado2 == 1)
        {
            printf("\nCidade %s venceu a rodada!\n", cidade1); 
            printf("Primeiro atributo: %s: %d - Segundo atributo: %s: %d\n", atributo1_str, atributo1, atributo2_str, atributo2); 
            
        }else if (resultado1 == 0 && resultado2 == 0)
        {
            printf("\nCidade %s venceu a rodada!\n", cidade2);
            printf("Primeiro atributo: %s: %d - Segundo atributo: %s: %d\n", atributo1_str, atributo1, atributo2_str, atributo2);
        }else
        {
            printf("\nEmpate!\n");
            printf("Cidade1: %s - Cidade2: %s\n", cidade1, cidade2);
            printf("Primeiro atributo: %s: %d - Segundo atributo: %s: %d\n", atributo1_str, atributo1, atributo2_str, atributo2);
        }
       
    return 0;
    
}