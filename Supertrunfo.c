#include <stdio.h>

int main (){

    //variaveis

    //Carta 1
    char estado[20]; //nome do estado
    char codigo[20]; //codigo da carta
    int populacao; //população do estado
    float area; //area total
    float pib; //pib do estado
    int Pt; //pontos turisticos
    float densidade; //densidade populacional
    float pibpe; //Pib Percapita
    float superpoder; //superpoder da carta

    //carta 2
    char estado2[20]; //nome do estado
    char codigo2[20]; //codigo da carta
    int populacao2; //população do estado
    float area2; //area total
    float pib2; //pib do estado
    int Pt2; //pontos turisticos
    float densidade2; //densidade populacional
    float pibpe2; //Pib Percapita
    float superpoder2; //superpoder da carta


    /*Coleta de informações

    Carta 1*/
    printf("escreva o nome do estado: \n");
    scanf ("%s", estado);
    printf("escreva o codigo da carta: \n");
    scanf("%s", codigo);
    printf("população: \n");
    scanf("%d", &populacao);
    printf("Área do estado: \n");
    scanf("%f", &area);
    printf("PIB do estado: \n");
    scanf("%f", &pib);
    printf("Pontos turisticos: \n");
    scanf("%d", &Pt);
    
    //carta 2
    printf("escreva o nome do estado: \n");
    scanf ("%s", estado2);
    printf("escreva o codigo da carta: \n");
    scanf("%s", codigo2);
    printf("população: \n");
    scanf("%d", &populacao2);
    printf("Área do estado: \n");
    scanf("%f", &area2);
    printf("PIB do estado: \n");
    scanf("%f", &pib2);
    printf("Pontos turisticos: \n");
    scanf("%d", &Pt2);


    //divisão entre os numeros

    //carta 1
    densidade = (float) populacao / area;
    pibpe = (float) (pib * 1000000000) / populacao;

    //carta 2
    densidade2 = (float) populacao2 / area2;
    pibpe2 = (float) (pib2 * 1000000000) / populacao2;


    //superpoder

    //carta 1
    superpoder = (float) populacao + area + Pt + pib + pibpe + (1.0 / densidade);
    superpoder2 = (float) populacao2 + area2 + Pt2 + pib2 + pibpe2 + (1.0 / densidade2);


    //mostrar informações coletadas

    //Carta 1
    printf("Estado: %s\n", estado);
    printf("Codigo: %s\n", codigo);
    printf("População: %d\n", populacao);
    printf("Área: %.3f\n", area);
    printf("PIB: %.3f\n", pib);
    printf("Pontos turisticos: %d\n", Pt);
    printf("Densidade Populacional: %.3f\n", densidade);
    printf("PIB percapita %.3f\n", pibpe);
    printf("Superpoder: %.2f\n\n", superpoder);

    //carta 2
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("População: %d\n", populacao2);
    printf("Área: %.3f\n", area2);
    printf("PIB: %.3f\n", pib2);
    printf("Pontos turisticos: %d\n", Pt2);
    printf("Densidade Populacional: %.3f\n", densidade2);
    printf("PIB percapita %.3f\n", pibpe2);
    printf("Superpoder: %.2f\n\n", superpoder2);

    //comparação basica supertrunfo
    printf("Comparação das cartas\n\n");

    printf("população Carta 1: %d\n", populacao > populacao2);
    printf("Área carta 1: %d\n", area > area2);
    printf("PIB carta 1: %d\n", pib > pib2);
    printf("Pontos turisticos carta 1: %d\n", Pt > Pt2);
    printf("Densidade populacional carta 1: %d\n", densidade < densidade2);
    printf("PIB percapita carta 1: %d\n", pibpe > pibpe2);
    printf("Superpoder carta 1: %d\n\n", superpoder > superpoder2);

    //Comparação com o Supertrunfo

    if (populacao > populacao2){
        printf("Carta 1 venceu!\n");

    } else if (populacao < populacao2){
        printf("Carta 1 perdeu\n");

    } else {
        printf("Empate!\n");
    }
    //----------------

    if (area > area2){
        printf("Carta 1 venceu!\n");

    } else if (area < area2){
        printf("Carta 1 perdeu\n");

    } else {
        printf("Empate!\n");
    }

    //----------------

    if (pib > pib2){
        printf("Carta 1 venceu!\n");

    } else if (pib < pib2){
        printf("Carta 1 perdeu\n");

    }  else {
        printf("Empate\n");
    }

    //----------------

    if (Pt > Pt2){
        printf("Carta 1 venceu!\n");
    
    } else if (Pt < Pt2){
        printf("Carta 1 Perdeu\n");

    } else {
        printf("Empate!\n");
    }

    //----------------

    if (densidade > densidade2){
        printf("Carta 1 venceu!\n");

    } else if (densidade < densidade2){
        printf ("Carta 1 perdeu\n");

    } else {
        printf("Empate\n");
    }

    //----------------

    if (pibpe > pibpe2){
        printf("Carta 1 venceu!\n");

    } else if (pibpe < pibpe2){
        printf ("Carta 1 perdeu\n");

    } else {
        printf("Empate\n");
    }

    //----------------

    if (superpoder > superpoder2){
        printf("Carta 1 venceu!\n");

    } else if (superpoder < superpoder2){
        printf ("Carta 1 perdeu\n");

    } else {
        printf("Empate\n");
    }


    return 0;
}