#include <stdio.h>

int main(){

    //declarando as variáveis das cartas 1 e 2
    char estado1[20];
    char estado2[20];
    char codigo1[20];
    char codigo2[20];
    char cidade1[20];
    char cidade2[20];
    int populacao1;
    int populacao2;
    float area1;
    float area2;
    float pib1;
    float pib2;
    int pontos_tur1;
    int pontos_tur2;
    float densidade_populacional1;
    float densidade_populacional2;
    float pib_per_capita1;
    float pib_per_capita2;
    float super_poder1;
    float super_poder2;

    //pedindo e recebendo informações da carta 1
    printf("Digite o estado da carta 1: ");
    scanf("%s", &estado1);
    printf("Digite o código da carta 1: ");
    scanf("%s", &codigo1);
    printf("Digite a cidade da carta 1: ");
    scanf("%s", &cidade1);
    printf("Digite a população da carta 1: ");
    scanf("%d", &populacao1);
    printf("Digite a área da carta 1: ");
    scanf("%f", &area1);
    printf("Digite o PIB da carta 1: ");
    scanf("%f", &pib1);
    printf("Digite a quantidade de pontos turísticos da carta 1: ");
    scanf("%d", &pontos_tur1);

    //atribuindo valores às variáveis densidade_populacional1  e pib_per_capita1
    densidade_populacional1 = populacao1 / area1;
    pib_per_capita1 = pib1 / populacao1;

    //pedindo e recebendo informações da carta 2
    printf("Digite o estado da carta 2: ");
    scanf("%s", &estado2);
    printf("Digite o código da carta 2: ");
    scanf("%s", &codigo2);
    printf("Digite a cidade da carta 2: ");
    scanf("%s", &cidade2);
    printf("Digite a população da carta 2: ");
    scanf("%d", &populacao2);
    printf("Digite a área da carta 2: ");
    scanf("%f", &area2);
    printf("Digite o PIB da carta 2: ");
    scanf("%f", &pib2);
    printf("Digite a quantidade de pontos turísticos da carta 2: ");
    scanf("%d", &pontos_tur2);

    //atribuindo valores às variáveis densidade_populacional2 e pib_per_capita2
    densidade_populacional2 = populacao2 / area2;
    pib_per_capita2 = pib2 / populacao2;

    //exibindoo dados da carta 1
    printf("Carta 1: \n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.1f km²\n", area1);
    printf("PIB: R$ %.2f\n", pib1);
    printf("Pontos Turísticos: %d\n", pontos_tur1);
    printf("Densidade Populacional: %.2f habitantes por km²\n", densidade_populacional1);
    printf("PIB per Capita: R$ %.2f\n", pib_per_capita1);
    
    super_poder1 = populacao1 + area1 + pib1 + pontos_tur1 + (1 / densidade_populacional1) + pib_per_capita1;
    printf("Super Poder: %f\n", super_poder1); /*nesse caso atribuimos primeiro o valor da 
                                                variável super_poder1 para depois exibir*/
    //exibindoo dados da carta 2
    printf("Carta 2: \n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.1f km²\n", area2);
    printf("PIB: R$ %.2f\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos_tur2);    
    printf("Densidade Populacional: %.2f habitantes por km²\n", densidade_populacional2);
    printf("PIB per Capita: R$ %.2f\n", pib_per_capita2);

    super_poder2 = populacao2 + area2 + pib2 + pontos_tur2 + (1 / densidade_populacional2) + pib_per_capita2;
    printf("Super Poder: %f\n", super_poder2); /*nesse caso atribuimos primeiro o valor da 
                                                variável super_poder2 para depois exibir*/
    //exibindo qual será o atributo utilizado
    printf("Comparando as Cartas 1 e 2 de acordo com o atributo 'Super Poder'\n");
    //exibindo valores do atributo
    printf("Carta 1 - %s: %f\n", estado1, super_poder1);
    printf("Carta 2 - %s: %f\n", estado2, super_poder2);
    
    //exibindo o vencedor
    if(super_poder1 > super_poder2){
        printf("Carta 1 venceu!");
    }  else {
        printf("Carta 2 venceu!");
    }


    return 0;

}