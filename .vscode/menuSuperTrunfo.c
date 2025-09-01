#include <stdio.h>

int main()
{
    // declarando e atribuindo valores às variáveis das cartas 1 e 2
    char pais1[20] = "Brasil";
    char pais2[20] = "China";
    int populacao1 = 217000000;
    int populacao2 = 1425000000;
    float area1 = 8516000.0;
    float area2 = 9707000.0;
    double pib1 = 2130000000000.0;
    double pib2 = 17700000000000.0;
    int pontos_tur1 = 100;
    int pontos_tur2 = 100;
    float densidade_demografica1 = 25.48;
    float densidade_demografica2 = 146.8;

    // exibindo o nome do jogo e as opções de atributos para o jogador
    printf("SUPER TRUNFO PAÍSES: BRASIL X CHINA \n");
    printf("Escolha um atributo: \n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");

    // variável do atributo escolhido
    int escolha_atributo;

    // pedindo e recebdno um valor para a variável
    printf("Digite sua escolha:");
    scanf("%d", &escolha_atributo);

    // exibindo os países comparados
    printf("%s X %s\n", pais1, pais2);

    // menu interativo exibindo valores das variáveis de acordo com o atributo escolhido
    switch (escolha_atributo)
    {
    case 1:
        printf("Você escolheu: População\n");
        printf("População %s: %d habitantes \n", pais1, populacao1);
        printf("População %s: %d habitantes \n", pais2, populacao2);
        break;
    case 2:
        printf("Você escolheu: Área\n");
        printf("Área %s: %f km² \n", pais1, area1);
        printf("Área %s: %f km² \n", pais2, area2);
        break;
    case 3:
        printf("Você escolheu: PIB\n");
        printf("PIB %s: USD %.2f \n", pais1, pib1);
        printf("PIB %s: USD %.2f \n", pais2, pib2);
        break;
    case 4:
        printf("Você escolheu: Pontos Turísticos\n");
        printf("Pontos Turísticos %s: %d \n", pais1, pontos_tur1);
        printf("Pontos Turísticos %s: %d \n", pais2, pontos_tur2);
        break;
    case 5:
        printf("Você escolheu: Densidade Demográfica\n");
        printf("Densidade Demográfica %s: %f hab/km² \n", pais1, densidade_demografica1);
        printf("Densidade Demográfica %s: %f hab/km² \n", pais2, densidade_demografica2);
        break;
    default:
        printf("Opção inválida!!!\n");
        break;
    }

    // exibindo país vencedor ou empate
    if (((escolha_atributo == 1) && (populacao1 > populacao2)) ||
        ((escolha_atributo == 2) && (area1 > area2)) ||
        ((escolha_atributo == 3) && (pib1 > pib2)) ||
        ((escolha_atributo == 4) && (pontos_tur1 > pontos_tur2)) ||
        ((escolha_atributo == 5) && (densidade_demografica1 < densidade_demografica2)))
    {
        printf("%s Venceu!!!\n", pais1);
    }
    else if (((escolha_atributo == 1) && (populacao1 == populacao2)) ||
             ((escolha_atributo == 2) && (area1 == area2)) ||
             ((escolha_atributo == 3) && (pib1 == pib2)) ||
             ((escolha_atributo == 4) && (pontos_tur1 == pontos_tur2)) ||
             ((escolha_atributo == 5) && (densidade_demografica1 == densidade_demografica2)))
    {
        printf("Empate!!!");
    }
    else if ((escolha_atributo != 1) || 
             (escolha_atributo != 2) ||
             (escolha_atributo != 3) || 
             (escolha_atributo != 4) ||
             (escolha_atributo != 5))
    {
        printf("\Tente outra vez!!!");
    }
    else
    {
        printf("%s Venceu!!!\n", pais2);
    }

    return 0;
}