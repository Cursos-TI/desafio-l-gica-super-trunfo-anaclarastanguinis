#include <stdio.h>

int main()
{
    //declarando e atribuindo valores às variáveis das cartas 1 e 2
    char pais1[20] = "BRASIL";
    char pais2[20] = "CHINA";
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
    int escolha_atributo1, escolha_atributo2;
    float resultado_carta1 = 0;
    float resultado_carta2 = 0;

    //exibindo o nome do jogo e as opções de atributos para o jogador
    printf("SUPER TRUNFO PAÍSES: BRASIL X CHINA \n");
    printf("Escolha o primeiro atributo: \n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");

    //pedindo e armazenando a primeira escolha do jogador    
    printf("Digite sua escolha: \n"); 
    scanf("%d", &escolha_atributo1);

    //exibindo o nome do jogo e as opções de atributos para o jogador
    printf("Escolha o segundo atributo: \n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");

    //pedindo e armazenando a segunda escolha do jogador
    printf("Digite sua escolha: \n"); 
    scanf("%d", &escolha_atributo2);

    if(escolha_atributo1 == escolha_atributo2){ //impede a escolha de atributos iguais 
      printf("Você escolheu dois atributos iguais \n");
      return 0;
    } else if ((escolha_atributo1 < 1) || (escolha_atributo1 > 5) || 
               (escolha_atributo2 < 1) || (escolha_atributo2 > 5)){ //para em caso de um número fora das opções
      printf("Opção inválida!");
      return 0;
    } else {        
      printf("%s X %s\n", pais1, pais2); //exibindo os países e o primeiro atributo escolhido
      switch (escolha_atributo1){  
      case 1:
        printf("Como primeiro atributo você escolheu: População\n");
        printf("População %s: %d habitantes \n", pais1, populacao1);
        printf("População %s: %d habitantes \n", pais2, populacao2);
        resultado_carta1 += populacao1;
        resultado_carta2 += populacao2;
      break;
      case 2:
        printf("Como primeiro atributo você escolheu: Área\n");
        printf("Área %s: %f km² \n", pais1, area1);
        printf("Área %s: %f km² \n", pais2, area2);
        resultado_carta1 += area1;
        resultado_carta2 += area2;
      break;
      case 3:
        printf("Como primeiro atributo você escolheu: PIB\n");
        printf("PIB %s: USD %.2f \n", pais1, pib1);
        printf("PIB %s: USD %.2f \n", pais2, pib2);
        resultado_carta1 += pib1;
        resultado_carta2 += pib2;
      break;
      case 4:
        printf("Como primeiro atributo você escolheu: Pontos Turísticos\n");
        printf("Pontos Turísticos %s: %d \n", pais1, pontos_tur1);
        printf("Pontos Turísticos %s: %d \n", pais2, pontos_tur2);
        resultado_carta1 += pontos_tur1;
        resultado_carta2 += pontos_tur2;
      break;
      case 5:
        printf("Como primeiro atributo você escolheu: Densidade Demográfica\n");
        printf("Densidade Demográfica %s: %f hab/km² \n", pais1, densidade_demografica1);
        printf("Densidade Demográfica %s: %f hab/km² \n", pais2, densidade_demografica2);
        resultado_carta1 += densidade_demografica1;
        resultado_carta2 += densidade_demografica2;
      break;
      default:
        printf("Opção inválida!!!\n");
      break;
      }
      switch (escolha_atributo2){ //exibindo os países e o segundo atributo escolhido
      case 1:
        printf("Como segundo atributo você escolheu: População\n");
        printf("População %s: %d habitantes \n", pais1, populacao1);
        printf("População %s: %d habitantes \n", pais2, populacao2);
        resultado_carta1 += populacao1;
        resultado_carta2 += populacao2;
      break;
      case 2:
        printf("Como segundo atributo você escolheu: Área\n");
        printf("Área %s: %f km² \n", pais1, area1);
        printf("Área %s: %f km² \n", pais2, area2);
        resultado_carta1 += area1;
        resultado_carta2 += area2;
      break;
      case 3:
        printf("Como segundo atributo você escolheu: PIB\n");
        printf("PIB %s: USD %.2f \n", pais1, pib1);
        printf("PIB %s: USD %.2f \n", pais2, pib2);
        resultado_carta1 += pib1;
        resultado_carta2 += pib2;
      break;
      case 4:
        printf("Como segundo atributo você escolheu: Pontos Turísticos\n");
        printf("Pontos Turísticos %s: %d \n", pais1, pontos_tur1);
        printf("Pontos Turísticos %s: %d \n", pais2, pontos_tur2);
        resultado_carta1 += pontos_tur1;
        resultado_carta2 += pontos_tur2;
        break;
      case 5:
        printf("Como segundo atributo você escolheu: Densidade Demográfica\n");
        printf("Densidade Demográfica %s: %f hab/km² \n", pais1, densidade_demografica1);
        printf("Densidade Demográfica %s: %f hab/km² \n", pais2, densidade_demografica2);
        resultado_carta1 += 1 / densidade_demografica1;
        resultado_carta2 += 1 / densidade_demografica2;
      break;
      default:
        printf("Opção inválida!!!\n");
      break;
      }
    }
    
    //exibindo a soma dos atributos
    printf("Soma dos atributos escolhidos: \n");
    printf("%s: %f \n", pais1, resultado_carta1);
    printf("%s: %f \n", pais2, resultado_carta2);

    //impondo as condiçoes e exibindo o vencedor
    if(resultado_carta1 > resultado_carta2){
      printf("%s VENCEU A RODADA!!!", pais1);
    } else if (resultado_carta1 < resultado_carta2){
      printf("%s VENCEU A RODADA!!!", pais2);
    } else {
      printf("%s E %s EMPATAM!!!", pais1, pais2);
    } 

return 0;

}
