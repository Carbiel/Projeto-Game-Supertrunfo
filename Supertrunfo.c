#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

// Struct------------------------------------
struct Carta
{
    char estado[20];  // nome do estado
    char codigo[20];  // codigo da carta
    int populacao;    // população do estado
    float area;       // area total
    float pib;        // pib do estado
    int Pt;           // pontos turisticos
    float densidade;  // densidade populacional
    float pibpe;      // Pib Percapita
    float superpoder; // superpoder da carta
};

int main()
{
    struct Carta jogador;
    struct Carta cpu;

    // switch------------------------------------
    int opcao;
    int escolha = 0;

    srand(time(NULL));

    //Estados------------------------------------
    char estados[][20] = {
        "São Paulo", "Rio de Janeiro", "Minas Gerais",
        "Bahia", "Paraná", "Ceará",
        "Pernambuco", "Santa Catarina" 
    };

    int total_estados = 8;

    // loop------------------------------------
    while (escolha != 4)
    {

        // Menu Principal------------------------------------

        printf("Menu Principal.\n\n");
        printf("1-Jogar.\n");
        printf("2-Regras.\n");
        printf("3-Creditos\n");
        printf("4-Sair\n");
        scanf("%d", &escolha);

        switch (escolha)
        {
        case 1:

            //Gerador dos Estados------------------------------------
            int i = rand() % total_estados;
            int j = rand() % total_estados;

            while (j == i)
                j = rand() % total_estados;

            strcpy(jogador.estado, estados [i]);
            strcpy(cpu.estado, estados[j]);

            //gerador de codigos------------------------------------
            sprintf(jogador.codigo, "B%d", rand() % 100);
            sprintf(cpu.codigo, "B%d", rand() % 100);

            // Gerador das cartas------------------------------------

            //JOGADOR
            jogador.populacao = rand() % 10000000 + 10000000;
            jogador.area = rand() % 2000 + 500;
            jogador.pib = rand() % 1000 + 100;
            jogador.Pt = rand() % 100;

            //CPU
            cpu.populacao = rand() % 10000000 + 10000000;
            cpu.area = rand() % 2000 + 500;
            cpu.pib = rand() % 1000 + 100;
            cpu.Pt = rand() % 100;

            //Calculos------------------------------------

            //JOGADOR
            jogador.densidade = (float)jogador.populacao / jogador.area;
            jogador.pibpe = (float)(jogador.pib * 1000000000.0) / jogador.populacao;
            jogador.superpoder = (float) jogador.populacao + jogador.area + jogador.pib + jogador.Pt + jogador.pibpe + (1.0 / jogador.densidade);

            // CPU
            cpu.densidade = (float) cpu.populacao / cpu.area;
            cpu.pibpe = (float)(cpu.pib * 1000000000.0) / cpu.populacao;
            cpu.superpoder = (float) cpu.populacao + cpu.area + cpu.pib + cpu.Pt + cpu.pibpe + (1.0 /cpu.densidade);


            // mostrar informações coletadas------------------------------------

            //JOGADOR
            printf("\n\n--- JOGADOR ---\n");
            printf("Estado: %s\n", jogador.estado);
            printf("Codigo: %s\n", jogador.codigo);
            printf("População: %d\n", jogador.populacao);
            printf("Área: %.2f\n", jogador.area);
            printf("PIB: %.2f\n", jogador.pib);
            printf("Pontos turisticos: %d\n", jogador.Pt);
            printf("Densidade Populacional: %.3f\n", jogador.densidade);
            printf("PIB percapita %.2f\n", jogador.pibpe);
            printf("Superpoder: %.1f\n\n", jogador.superpoder);

            //CPU
           /* printf("\n--- CPU--- \n");
            printf("Estado: %s\n", cpu.estado);
            printf("Codigo: %s\n", cpu.codigo);
            printf("População: %d\n", cpu.populacao);
            printf("Área: %.2f\n", cpu.area);
            printf("PIB: %.2f\n", cpu.pib);
            printf("Pontos turisticos: %d\n", cpu.Pt);
            printf("Densidade Populacional: %.3f\n", cpu.densidade);
            printf("PIB percapita %.2f\n", cpu.pibpe);
            printf("Superpoder: %.1f\n\n", cpu.superpoder);
            */
            // switch e comparação if else com o Supertrunfo------------------------------------
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
                if (jogador.populacao > cpu.populacao)
                {
                    printf("\n\nJOGADOR venceu!\n");
                    printf("População da carta 1: %d\n", jogador.populacao);
                    printf("População da carta 2: %d\n\n", cpu.populacao);
                }
                else if (jogador.populacao < cpu.populacao)
                {
                    printf("\n\nCPU venceu!\n");
                    printf("População da carta 1: %d\n", jogador.populacao);
                    printf("População da carta 2: %d\n\n", cpu.populacao);
                }
                else
                {
                    printf("\n\nEmpate!\n");
                    printf("População da carta 1: %d\n", jogador.populacao);
                    printf("População da carta 2: %d\n\n", cpu.populacao);
                }
                break;

            case 2:
                if (jogador.area > cpu.area)
                {
                    printf("\n\nJOGADOR venceu!\n");
                    printf("Área da carta 1: %.2f\n", jogador.area);
                    printf("Área da carta 2: %.2f\n\n", cpu.area);
                }
                else if (jogador.area < cpu.area)
                {
                    printf("\n\nCPU venceu!\n");
                    printf("Área da carta 1: %.2f\n", jogador.area);
                    printf("Área da carta 2: %.2f\n\n", cpu.area);
                }
                else
                {
                    printf("\n\nEmpate!\n");
                    printf("Área da carta 1: %.2f\n", jogador.area);
                    printf("Área da carta 2: %.2f\n\n", cpu.area);
                }
                break;

            case 3:
                if (jogador.pib > cpu.pib)
                {
                    printf("\n\nJOGADOR venceu!\n");
                    printf("PIB da carta 1: %.2f\n", jogador.pib);
                    printf("PIB da carta 2: %.2f\n\n", cpu.pib);
                }
                else if (jogador.pib < cpu.pib)
                {
                    printf("\n\nCPU venceu!\n");
                    printf("PIB da carta 1: %.2f\n", jogador.pib);
                    printf("PIB da carta 2: %.2f\n\n", cpu.pib);
                }
                else
                {
                    printf("\n\nEmpate\n");
                    printf("PIB da carta 1: %.2f\n", jogador.pib);
                    printf("PIB da carta 2: %.2f\n\n", cpu.pib);
                }
                break;

            case 4:
                if (jogador.Pt > cpu.Pt)
                {
                    printf("\n\nJOGADOR venceu!\n");
                    printf("Pontos turisticos da carta 1: %d\n", jogador.Pt);
                    printf("Pontos turisticos da carta 2: %d\n\n", cpu.Pt);
                }
                else if (jogador.Pt < cpu.Pt)
                {
                    printf("\n\nCPU venceu!\n");
                    printf("Pontos turisticos da carta 1: %d\n", jogador.Pt);
                    printf("Pontos turisticos da carta 2: %d\n\n", cpu.Pt);
                }
                else
                {
                    printf("\n\nEmpate!\n");
                    printf("Pontos turisticos da carta 1: %d\n", jogador.Pt);
                    printf("Pontos turisticos da carta 2: %d\n\n", cpu.Pt);
                }
                break;

            case 5:
                if (jogador.densidade < cpu.densidade)
                {
                    printf("\n\nJOGADOR venceu!\n");
                    printf("Densidade da carta 1: %.2f\n", jogador.densidade);
                    printf("Desidade da carta 2: %.2f\n\n", cpu.densidade);
                }
                else if (jogador.densidade > cpu.densidade)
                {
                    printf("\n\nCPU venceu!\n");
                    printf("Densidade da carta 1: %.2f\n", jogador.densidade);
                    printf("Desidade da carta 2: %.2f\n\n", cpu.densidade);
                }
                else
                {
                    printf("\n\nEmpate\n");
                    printf("Densidade da carta 1: %.2f\n", jogador.densidade);
                    printf("Desidade da carta 2: %.2f\n\n", cpu.densidade);
                }
                break;

            case 6:
                if (jogador.pibpe > cpu.pibpe)
                {
                    printf("\n\nJOGADOR venceu!\n");
                    printf("PIB percapita da carta 1: %.2f\n", jogador.pibpe);
                    printf("PIB percapita da carta 2: %.2f\n\n", cpu.pibpe);
                }
                else if (jogador.pibpe < cpu.pibpe)
                {
                    printf("\n\nCPU venceu!\n");
                    printf("PIB percapita da carta 1: %.2f\n", jogador.pibpe);
                    printf("PIB percapita da carta 2: %.2f\n\n", cpu.pibpe);
                }
                else
                {
                    printf("\n\nEmpate\n");
                    printf("PIB percapita da carta 1: %.2f\n", jogador.pibpe);
                    printf("PIB percapita da carta 2: %.2f\n\n", cpu.pibpe);
                }
                break;

            case 7:
                if (jogador.superpoder > cpu.superpoder)
                {
                    printf("\n\nJOGADOR venceu!\n");
                    printf("===Superpoder=== da carta 1: %.1f\n", jogador.superpoder);
                    printf("===Superpoder=== da carta 2: %.1f\n\n", cpu.superpoder);
                }
                else if (jogador.superpoder < cpu.superpoder)
                {
                    printf("CPU venceu!\n");
                    printf("===Superpoder=== da carta 1: %.1f\n", jogador.superpoder);
                    printf("===Superpoder=== da carta 2: %.1f\n\n", cpu.superpoder);
                }
                else
                {
                    printf("Empate\n");
                    printf("===Superpoder=== da carta 1: %.1f\n", jogador.superpoder);
                    printf("===Superpoder=== da carta 2: %.1f\n\n", cpu.superpoder);
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
            printf("Versao: 1.2\n");
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
