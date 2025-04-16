#include <stdio.h>

int main(){ 
    printf("\nBem vindo ao jogo!:\n");

    //variaveis da carta 1//
    char estado1, codigo1[20], cidade1[50];
    int populacao1, pontosTuristicos1;
    float pib1, area1, densidade1, PibPerCapita1;

    //variaveis da carta 2//
    char estado2, codigo2[20], cidade2[50];
    int populacao2, pontosTuristicos2;
    float pib2, area2, densidade2, PibPerCapita2;
  

    //**entrada de dados da carta 1**//
    printf ("**insira os dados da carta 1**:\n");
    printf ("estado:\n");
    scanf (" %c", &estado1);

    printf ("codigo:\n");
    scanf (" %19s", codigo1);

    printf ("cidade:\n");
    scanf ("%49s", cidade1);

    printf ("populacao:\n");
    scanf ("%d", &populacao1);

    printf ("area:\n");
    scanf ("%f", &area1);

    printf ("pib:\n");
    scanf ("%f", &pib1);

    printf ("pontosturisticos:\n");
    scanf ("%d", &pontosTuristicos1);

    // Cálculo da densidade populacional 1//
    densidade1 = (area1 != 0) ? populacao1 / area1 : 0;
    // Imprimindo o resultado da densidade populacional//
    printf("Densidade Populacional 1: %.2f hab/km²\n", densidade1);

    //calculo do pib per capita 1//
    PibPerCapita1 = pib1 / (populacao1 + (populacao1 == 0));
    //imprimir resultado pib per capita 1//
    printf("PIB Per Capita 1: %.2f\n", PibPerCapita1);

    //**entrada de dados da carta 2**//
    printf ("\ninsira os dados da carta 2: \n");
    printf ("estado:\n");
    scanf (" %c", &estado2);

    printf ("codigo:\n");
    scanf ("%19s", codigo2);

    printf ("cidade:\n");
    scanf ("%49s", cidade2);

    printf ("populacao:\n");
    scanf ("%d",&populacao2);

    printf ("area:\n");
    scanf ("%f", &area2);

    printf ("pib:\n");
    scanf ("%f", &pib2);

    printf ("pontosturisticos:\n");
    scanf ("%d",&pontosTuristicos2);

    // Cálculo da densidade populacional 2//
    densidade2 = (area2 != 0) ? populacao2 / area2 : 0;
    // Imprimindo o resultado da densidade populacional
    printf("Densidade Populacional 2: %.2f hab/km²\n", densidade2);

    //calculo do pib per capita 2//
    PibPerCapita2 = pib2 / (populacao2 + (populacao2 == 0));
    //imprimir resultado pib per capita 2//
    printf("PIB Per Capita 2: %.2f\n", PibPerCapita2);

    //comparando as cartas 1 e 2//
    printf("\nComparando o PIB das duas cartas:\n");

    if (pib1 > pib2) {
        printf("A carta 1 tem o maior PIB: %.2f\n", pib1);
    } else {
        printf("A carta 2 tem o maior PIB: %.2f\n", pib2);
    }  
    //#comparando atributos#//

    int escolha;

    printf("\n##COMPARANDO ATRIBUTOS##\n");
    printf("Escolha um atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - Densidade populacional\n");
    printf("4 - Pib\n");
    printf("5 - Pontos turísticos\n");
    printf("Digite sua escolha: ");
    scanf("%d", &escolha);

    switch (escolha) {
        case 1:
            printf("\nPopulação - Carta 1: %d | Carta 2: %d\n", populacao1, populacao2);
            if (populacao1 > populacao2)
                printf("Resultado: Carta 1 tem maior população.\n");
            else if (populacao2 > populacao1)
                printf("Resultado: Carta 2 tem maior população.\n");
            else
                printf("Resultado: ambos tem a mesma população!\n");
            break;

        case 2:
            printf("\nÁrea - Carta 1: %.2f | Carta 2: %.2f\n", area1, area2);
            if (area1 > area2)
                printf("Resultado: Carta 1 tem maior área.\n");
            else if (area2 > area1)
                printf("Resultado: Carta 2 tem maior área.\n");
            else
                printf("Resultado: ambos tem a mesma área!\n");
            break;

        case 3:
            printf("\nDensidade - Carta 1: %.2f | Carta 2: %.2f\n", densidade1, densidade2);
            if (densidade1 > densidade2)
                printf("Resultado: Carta 1 tem maior densidade.\n");
            else if (densidade2 > densidade1)
                printf("Resultado: Carta 2 tem maior densidade.\n");
            else
                printf("Resultado:ambos tem a mesma densidade!\n");
            break;

        case 4:
            printf("\nPib1 - Carta 1: %.2f | Carta 2: %.2f\n", pib1, pib2);
            if (pib1 > pib2)
                printf("Resultado: Carta 1 tem maior Pib.\n");
            else if (pib2 > pib1)
                printf("Resultado: Carta 2 tem maior Pib.\n");
            else
                printf("Resultado: ambos tem o mesmo pib!\n");
            break;

        case 5:
            printf("\nPontos turísticos - Carta 1: %d | Carta 2: %d\n", pontosTuristicos1, pontosTuristicos2);
            if (pontosTuristicos1 > pontosTuristicos2)
                printf("Resultado: Carta 1 tem mais pontos turísticos.\n");
            else if (pontosTuristicos2 > pontosTuristicos1)
                printf("Resultado: Carta 2 tem mais pontos turísticos.\n");
            else
                printf("Resultado: ambos tem a mesma quantidade de pontos turisticos!\n");
            break;

        default:
            printf("Opção inválida.\n");
    }

    
    

return 0;


}