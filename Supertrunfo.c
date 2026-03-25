#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

// DOR E ANGUSTIA DE FAZER ISSO KAAKAKAKAKAKA. PODE IGNORAR ESSA MENSAGEM..
void angustia()
{
    printf("AHHHHHHHHHHHHHHHH TO PERDENDO A CABEÇA COM ESSE CODIGOOOOOOOOOO.");
}

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
    // struct-array------------
    struct Carta jogador[10];
    struct Carta cpu[10];

    // variavel----------
    int qtdjogador = 5;
    int qtdcpu = 5;

    // switch------------------------------------
    int opcao;
    int escolha = 0;

    // ALEATORIZADOR----
    srand(time(NULL));

    // Estados------------------------------------
    char estados[][20] = {
        "São Paulo", "Rio de Janeiro", "Minas Gerais",
        "Bahia", "Paraná", "Ceará", "Pernambuco",
        "Santa Catarina", "Goias", "Rio grande do sul"};

    int total_estados = 10;

    // VARIAVEL DE RODADA-------------
    int rodada = 1;

    // loop------------------------------------
    while (escolha != 4)
    {

        // Menu Principal------------------------------------

        printf("CPU update release\n");
        printf("Menu Principal.\n\n");
        printf("1-Jogar.\n");
        printf("2-Regras.\n");
        printf("3-Creditos\n");
        printf("4-Sair\n");
        scanf("%d", &escolha);

        switch (escolha)
        {
        case 1:

            // CRIAR E EMBARALHAR DECK------------------------------------
            int indices[10];

            for (int i = 0; i < total_estados; i++)
                indices[i] = i;

            // FISHER-YATES------------------------------
            for (int i = total_estados - 1; i > 0; i--)
            {
                int j = rand() % (i + 1);
                int temp = indices[i];
                indices[i] = indices[j];
                indices[j] = temp;
            }

            // DISTRIBUIÇÃO DAS CARTAS--------------
            for (int k = 0; k < qtdjogador; k++)
            {
                int idxJ = indices[k];
                int idxC = indices[k + qtdjogador];

                strcpy(jogador[k].estado, estados[idxJ]);
                strcpy(cpu[k].estado, estados[idxC]);

                sprintf(jogador[k].codigo, "B%d", rand() % 100);
                sprintf(cpu[k].codigo, "B%d", rand() % 100);

                // JOGADOR
                jogador[k].populacao = rand() % 10000000 + 10000000;
                jogador[k].area = rand() % 2000 + 500;
                jogador[k].pib = rand() % 1000 + 100;
                jogador[k].Pt = rand() % 100;

                // CPU
                cpu[k].populacao = rand() % 10000000 + 10000000;
                cpu[k].area = rand() % 2000 + 500;
                cpu[k].pib = rand() % 1000 + 100;
                cpu[k].Pt = rand() % 100;

                // Calculos------------------------------------

                // JOGADOR
                jogador[k].densidade = (float)jogador[k].populacao / jogador[k].area;
                jogador[k].pibpe = (float)(jogador[k].pib * 1000000000.0) / jogador[k].populacao;
                jogador[k].superpoder = (float)jogador[k].populacao + jogador[k].area + jogador[k].pib + jogador[k].Pt + jogador[k].pibpe + (1.0 / jogador[k].densidade);

                // CPU
                cpu[k].densidade = (float)cpu[k].populacao / cpu[k].area;
                cpu[k].pibpe = (float)(cpu[k].pib * 1000000000.0) / cpu[k].populacao;
                cpu[k].superpoder = (float)cpu[k].populacao + cpu[k].area + cpu[k].pib + cpu[k].Pt + cpu[k].pibpe + (1.0 / cpu[k].densidade);
            }

            // LOOP DO GAME------------------------
            while (qtdjogador > 0 && qtdcpu > 0)
            {
                struct Carta cartaJ = jogador[0];
                struct Carta cartaC = cpu[0];

                // RODADA
                printf("\n====================\n");
                printf("      RODADA %d", rodada);
                printf("\n====================\n");
                // mostrar informações coletadas------------------------------------

                // CPU
                printf("---CARTA DO OPONENTE---\n");
                printf("ESTADO: %s\n", cartaC.estado);
                printf("CÓDIGO: %s\n", cartaC.codigo);
                printf("POPULAÇÃO: ????\n");
                printf("ÁREA: ????\n");
                printf("PIB: ????\n");
                printf("PONTOS tURISTICOS: ????\n");
                printf("DENSIDADE POPULACIONAL ????:\n");
                printf("PIB PERCAPITA: ????\n");
                printf("SUPERPODER: ????\n\n");

                // JOGADOR
                printf("\n\n--- SUA CARTA ---\n");
                printf("ESTADO: %s\n", cartaJ.estado);
                printf("CÓDIGO: %s\n", cartaJ.codigo);
                printf("POPULAÇÃO: %d\n", cartaJ.populacao);
                printf("ÁREA: %.2f\n", cartaJ.area);
                printf("PIB: %.2f\n", cartaJ.pib);
                printf("PONTOS tURISTICOS: %d\n", cartaJ.Pt);
                printf("DENSIDADE POPULACIONAL: %.3f\n", cartaJ.densidade);
                printf("PIB PERCAPITA %.2f\n", cartaJ.pibpe);
                printf("SUPERPODER: %.1f\n\n", cartaJ.superpoder);

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

                int jogadorVenceu = 0;

                switch (opcao)
                {
                case 1:
                    if (cartaJ.populacao > cartaC.populacao)
                    {
                        jogadorVenceu = 1;
                        printf("\n\nJOGADOR venceu a rodada!\n");
                        printf("Boa carai\n");
                    }
                    else if (cartaJ.populacao < cartaC.populacao)
                    {
                        jogadorVenceu = -1;
                        printf("\n\nCPU venceu a rodada!\n");
                        printf("Ainda dá pra alcançar\n");
                    }
                    else
                    {
                        jogadorVenceu = 0;
                        printf("\n\nEmpate!\n");
                        printf("Bom fazer o né acontece kakakaakak\n");
                    }
                    break;

                case 2:
                    if (cartaJ.area > cartaC.area)
                    {
                        jogadorVenceu = 1;
                    }
                    else if (cartaJ.area < cartaC.area)
                    {
                        jogadorVenceu = -1;
                    }
                    else
                    {
                        jogadorVenceu = 0;
                    }
                    break;

                case 3:
                    if (cartaJ.pib > cartaC.pib)
                    {
                        jogadorVenceu = 1;
                    }
                    else if (cartaJ.pib < cartaC.pib)
                    {
                        jogadorVenceu = -1;
                    }
                    else
                    {
                        jogadorVenceu = 0;
                    }
                    break;

                case 4:
                    if (cartaJ.Pt > cartaC.Pt)
                    {
                        jogadorVenceu = 1;
                    }
                    else if (cartaJ.Pt < cartaC.Pt)
                    {
                        jogadorVenceu = -1;
                    }
                    else
                    {
                        jogadorVenceu = 0;
                    }
                    break;

                case 5:
                    if (cartaJ.densidade < cartaC.densidade)
                    {
                        jogadorVenceu = 1;
                    }
                    else if (cartaJ.densidade > cartaC.densidade)
                    {
                        jogadorVenceu = -1;
                    }
                    else
                    {
                        jogadorVenceu = 0;
                    }
                    break;

                case 6:
                    if (cartaJ.pibpe > cartaC.pibpe)
                    {
                        jogadorVenceu = 1;
                    }
                    else if (cartaJ.pibpe < cartaC.pibpe)
                    {
                        jogadorVenceu = -1;
                    }
                    else
                    {
                        jogadorVenceu = 0;
                    }
                    break;

                case 7:
                    if (cartaJ.superpoder > cartaC.superpoder)
                    {
                        jogadorVenceu = 1;
                    }
                    else if (cartaJ.superpoder < cartaC.superpoder)
                    {
                        jogadorVenceu = -1;
                    }
                    else
                    {
                        jogadorVenceu = 0;
                    }
                    break;

                default:
                    printf("Opção Inexistente....\n\n");
                    continue;
                }

                // SUPERTRUNFO----------------

                // JOGADOR VENCE
                if (jogadorVenceu == 1)
                {
                    printf("\nCarta do oponente adicionada no seu deck\n");
                    printf("Continua assim parceiro\n");

                    // ADICIONANDO A CARTA JOGADOR
                    jogador[qtdjogador] = cartaC;
                    qtdjogador++;

                    // REMOVENDO A CARTA CPU
                    for (int i = 0; i < qtdcpu - 1; i++)
                        cpu[i] = cpu[i + 1];
                    qtdcpu--;
                }
                else if (jogadorVenceu == -1)
                {
                    printf("\nO oponente pegou a sua carta\n");
                    printf("Vai deixar ?\n");

                    // ADICIONANDO A CARTA CPU
                    cpu[qtdcpu] = cartaJ;
                    qtdcpu++;

                    // REMOVENDO A CARTA JOGADOR
                    for (int i = 0; i < qtdjogador - 1; i++)
                        jogador[i] = jogador[i + 1];
                    qtdjogador--;
                }
                else
                {
                    printf("\nEssa foi por pouco....\n");
                }

                rodada++;
                printf("\n=== PROXIMA RODADA ===\n");
                Sleep(2000);
            }

            // FIM DO GAME--------------------------
            printf("\n====================\n");
            printf("      FIM DO GAME     \n");
            printf("====================\n\n");

            if (qtdjogador > qtdcpu)
            {
                printf("\nVITORIA DO JOGADOR.\n");
            }
            else if (qtdjogador < qtdcpu)
            {
                printf("\nVITORIA DA CPU.\n");
            }

            // JOGAR NOVAMENTE ?----------------
            int jogarNovamente;

            printf("\n Mais uma partida ?\n");
            printf("1-SIM\n 2-NÃO");
            scanf("%d", &jogarNovamente);

            if (jogarNovamente == 1)
            {
                qtdjogador = 5;
                qtdcpu = 5;
                rodada = 1;
                continue;
            }
            else
            {
                break;
            }

        // REGRAS DO GAME-------------------------------------
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

        // CREDITOS-CRIADOR-VERSÃO----------------------------
        case 3:
            printf("\n=================================\n");
            printf("           CREDITOS              \n");
            printf("=================================\n");
            printf("Criador: Carlos Gabriel\n");
            printf("Projeto: Super Trunfo em C\n");
            printf("Versao: 1.8\n");
            printf("=================================\n\n");
            printf("Pressione ENTER para voltar...");
            getchar();
            getchar();
            break;

        // SAIDA-------------------
        case 4:
            printf("Saindo....");
            break;

        // EM CASO DE ERRO DE DIGITAÇÃO-----------
        default:
            printf("Opção Inexistente....\n\n");
            break;
        }
    }

    return 0;
}
