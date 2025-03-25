#include <stdio.h>

int main(){ 
    printf("Bem vindo ao jogo!:\n");

    //variaveis da carta 1//
    char estado1, codigo1[20], cidade1[50];
    int populacao1, pontosTuristicos1;
    float pib1, area1;

    //variaveis da carta 2//
    char estado2, codigo2[20], cidade2[50];
    int populacao2, pontosTuristicos2;
    float pib2, area2;


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

    //**entrada de dados da carta 2**//
    printf ("insira os dados da carta 2: \n");
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

return 0;


}