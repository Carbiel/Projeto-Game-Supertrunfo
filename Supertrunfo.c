#include <stdio.h>

int main (){

    //variaveis

    //Carta 1
    char estado[20] = "São Paulo"; //nome do estado
    char codigo[20] = "B01"; //codigo da carta
    int populacao = 12325000; //população do estado
    float area = 1521.11; //area total
    float pib = 699.28; //pib do estado
    int Pt = 50; //pontos turisticos
    float densidade; //densidade populacional
    float pibpe; //Pib Percapita
    float superpoder; //superpoder da carta

    //carta 2
    char estado2[20] = "Rio de Janeiro"; //nome do estado
    char codigo2[20] = "B02"; //codigo da carta
    int populacao2 = 6748000; //população do estado
    float area2 = 1200.25; //area total
    float pib2 = 300.50; //pib do estado
    int Pt2 = 50; //pontos turisticos
    float densidade2; //densidade populacional
    float pibpe2; //Pib Percapita
    float superpoder2; //superpoder da carta

    //switch
    int opcao;
    int escolha = 0;

    //loop
    while (escolha != 4)
    {

    //Menu Principal

    printf("Menu Principal.\n\n");
    printf("1-Jogar.\n");
    printf("2-Regras.\n");
    printf("3-Creditos\n");
    printf("4-Sair\n");
    scanf("%d", &escolha);

    switch (escolha)
    {
    case 1:
    

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
    printf("Superpoder: %.1f\n\n", superpoder);

    //carta 2
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("População: %d\n", populacao2);
    printf("Área: %.3f\n", area2);
    printf("PIB: %.3f\n", pib2);
    printf("Pontos turisticos: %d\n", Pt2);
    printf("Densidade Populacional: %.3f\n", densidade2);
    printf("PIB percapita %.3f\n", pibpe2);
    printf("Superpoder: %.1f\n\n", superpoder2);

    //switch e comparação if else com o Supertrunfo
    printf("\nescolha um parâmetro:\n");
    printf("1- População.\n");
    printf("2- Área.\n");
    printf("3- PIB.\n");
    printf("4- Pontos turisticos.\n");
    printf("5- Densidade populacional.\n");
    printf("6- PIB percapita.\n");
    printf("7- Superpoder.\n");
    scanf("%d", &opcao);
 
    switch (opcao)
    {
     case 1:
     if (populacao > populacao2){
        printf("\n\nCarta 1 venceu!\n");
        printf("População da carta 1: %d\n", populacao);
        printf("População da carta 2: %d\n\n", populacao2);
     } else if (populacao < populacao2){
        printf("Carta 2 venceu!\n");
        printf("População da carta 1: %d\n", populacao);
        printf("População da carta 2: %d\n\n", populacao2);
     } else {
        printf("Empate!\n");
        printf("População da carta 1: %d\n", populacao);
        printf("População da carta 2: %d\n\n", populacao2);
     }
     break;

     case 2:
     if (area > area2){
        printf("Carta 1 venceu!\n");
        printf("Área da carta 1: %.2f\n", area);
        printf("Área da carta 2: %.2f\n\n", area2);
     } else if (area < area2){
        printf("Carta 2 venceu!\n");
        printf("Área da carta 1: %.2f\n", area);
        printf("Área da carta 2: %.2f\n\n", area2);
     } else {
        printf("Empate!\n");
        printf("Área da carta 1: %.2f\n", area);
        printf("Área da carta 2: %.2f\n\n", area2);
     }
     break;

     case 3:
     if (pib > pib2){
        printf("Carta 1 venceu!\n");
        printf("PIB da carta 1: %.2f\n", pib);
        printf("PIB da carta 2: %.2f\n\n", pib2);
     } else if (pib < pib2){
        printf("Carta 2 venceu!\n");
        printf("PIB da carta 1: %.2f\n", pib);
        printf("PIB da carta 2: %.2f\n\n", pib2);
     }  else {
        printf("Empate\n");
        printf("PIB da carta 1: %.2f\n", pib);
        printf("PIB da carta 2: %.2f\n\n", pib2);
     }
     break;

     case 4:
     if (Pt > Pt2){
        printf("Carta 1 venceu!\n");
        printf("Pontos turisticos da carta 1: %d\n", Pt);
        printf("Pontos turisticos da carta 2: %d\n\n", Pt2);
     } else if (Pt < Pt2){
        printf("Carta 2 venceu!\n");
        printf("Pontos turisticos da carta 1: %d\n", Pt);
        printf("Pontos turisticos da carta 2: %d\n\n", Pt2);
     } else {
        printf("Empate!\n");
        printf("Pontos turisticos da carta 1: %d\n", Pt);
        printf("Pontos turisticos da carta 2: %d\n\n", Pt2);
     }
     break;

     case 5:
     if (densidade < densidade2){
        printf("Carta 1 venceu!\n");
        printf("Densidade da carta 1: %.2f\n", densidade);
        printf("Desidade da carta 2: %.2f\n\n", densidade2);
     } else if (densidade > densidade2){
        printf ("Carta 2 venceu!\n");
        printf("Densidade da carta 1: %.2f\n", densidade);
        printf("Desidade da carta 2: %.2f\n\n", densidade2);
     } else {
        printf("Empate\n");
        printf("Densidade da carta 1: %.2f\n", densidade);
        printf("Desidade da carta 2: %.2f\n\n", densidade2);
     }
     break;

     case 6:
     if (pibpe > pibpe2){
        printf("Carta 1 venceu!\n");
        printf("PIB percapita da carta 1: %.2f\n", pibpe);
        printf("PIB percapita da carta 2: %.2f\n\n", pibpe2);
     } else if (pibpe < pibpe2){
        printf ("Carta 2 venceu!\n");
        printf("PIB percapita da carta 1: %.2f\n", pibpe);
        printf("PIB percapita da carta 2: %.2f\n\n", pibpe2);
     } else {
        printf("Empate\n");
        printf("PIB percapita da carta 1: %.2f\n", pibpe);
        printf("PIB percapita da carta 2: %.2f\n\n", pibpe2);
     }
     break;

     case 7:
     if (superpoder > superpoder2){
        printf("Carta 1 venceu!\n");
        printf("===Superpoder=== da carta 1: %.2f\n", superpoder);
        printf("===Superpoder=== da carta 2: %.2f\n\n", superpoder2);
     } else if (superpoder < superpoder2){
        printf ("Carta 2 venceu!\n");
        printf("===Superpoder=== da carta 1: %.2f\n", superpoder);
        printf("===Superpoder=== da carta 2: %.2f\n\n", superpoder2);
     } else {
        printf("Empate\n");
        printf("===Superpoder=== da carta 1: %.1f\n", superpoder);
        printf("===Superpoder=== da carta 2: %.1f\n\n", superpoder2);
     }
     break;
    
     default:
     printf("Opção Inexistente....\n\n");
      break;
     }
 
     break;

     case 2:
     printf("\n=================================\n");
     printf("          REGRAS DO GAME          ");
     printf("\n=================================\n");
     printf("1. Cada jogador possui uma carta.\n");
     printf("2. Cada carta possui atributos:\n");
     printf("   - Populacao\n");
     printf("   - Area\n");
     printf("   - PIB\n");
     printf("   - Pontos turisticos\n");
     printf("   - Densidade populacional\n");
     printf("   - PIB per capita\n");
     printf("   - Superpoder\n\n");
     printf("3. O jogador escolhe um atributo para comparar.\n");
     printf("4. Quem tiver o melhor valor vence a rodada.\n");
     printf("5. EXCECAO: menor densidade populacional vence.\n\n");
     printf("Pressione qualquer tecla para voltar...\n");
     getchar();
     getchar();
     break;

      case 3:
     printf("\n=================================\n");
     printf("           CREDITOS              \n");
     printf("=================================\n");
     printf("Criador: Carlos Gabriel\n");
     printf("Projeto: Super Trunfo em C\n");
     printf("Versao: 1.0\n");
     printf("=================================\n\n");
     printf("Pressione qualquer tecla para voltar...");
     getchar();
     getchar();
     break;

     case 4:
     printf("Saindo....");
     break;

     default:
     printf("Opção Inexistente....\n\n");
     break;
     }
    
    } 
    
    return 0;
}
