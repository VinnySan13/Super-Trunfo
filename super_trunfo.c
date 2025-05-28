#include <stdio.h>

int main(void) {
    char estado1, estado2;
    char registro1[3], registro2[3];
    char nome1[50], nome2[50];
    signed long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int turis1, turis2;
    float densi1, densi2;
    float capi1, capi2;
    float super1, super2;

    // Entrada da primeira carta
    printf("Insira os dados da primeira carta:\n");

    printf("Insira a letra que representa o estado: ");
    scanf(" %c", &estado1);  // Espaço antes de %c para evitar problema com buffer

    printf("Insira o código da carta: ");
    scanf("%s", registro1);

    printf("Insira o nome da cidade: ");
    scanf(" %[^\n]", nome1);  // Captura a linha inteira

    printf("Insira a população da cidade: ");
    scanf("%ld", &populacao1);

    printf("Insira a área em km² da cidade: ");
    scanf("%f", &area1);

    printf("Insira o PIB da cidade (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Insira o número de pontos turísticos da cidade: ");
    scanf("%d", &turis1);

    
    // Entrada da segunda carta
    printf("\nInsira os dados da segunda carta:\n");

    printf("Insira a letra que representa o estado: ");
    scanf(" %c", &estado2);  // Adicionado espaço antes do %c para evitar erro

    printf("Insira o código da carta: ");
    scanf("%s", registro2);

    printf("Insira o nome da cidade: ");
    scanf(" %[^\n]", nome2);

    printf("Insira a população da cidade: ");
    scanf("%ld", &populacao2);

    printf("Insira a área em km² da cidade: ");
    scanf("%f", &area2);

    printf("Insira o PIB da cidade (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Insira o número de pontos turísticos da cidade: ");
    scanf("%d", &turis2);


        //Codigo para calculo dos dados das cartas:
            //calculo da densidade populacional (população dividida por area)
            densi1 = (float) (populacao1 / area1);
            densi2 = (float) (populacao2 / area2);
            
            //calculo do PIB per Capita
            capi1 = (float) (pib1 / populacao1);
            capi2 = (float) (pib2 / populacao2);

            //Calculo do Super poder:
            super1 = populacao1 + area1 + pib1 + turis1 + capi1 - densi1;
            super2 = populacao2 + area2 + pib2 + turis2 + capi2 - densi2;


    // Exibição dos dados
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", registro1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("População: %ld\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", turis1);
    printf("Densidade populacional do Estado: %.3f\n", densi1);
    printf("O PIB per Capita do estado é: %.2f\n", capi1);
    printf("O Super Poder desta carta é: %.2f\n", super1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", registro2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %ld\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", turis2);
    printf("Densidade populacional do Estado: %.3f\n", densi2);
    printf("O PIB per Capita do estado é: %.2f\n", capi2);
    printf("O Super Poder desta carta é: %.2f\n", super2);

    // Comparação dos dados das cartas apresentando o resultado como 1 para vitoria da primeira carte e 0 para vitoria da segunda carta
    printf("\nComparação de cartas:\n");
    printf("População: %d\n", populacao1 > populacao2);
    printf("Área: %d\n", area1 > area2);
    printf("PIB: %d\n", pib1 > pib2);
    printf("Pontos Turísticos: %d\n", turis1 > turis2);
    printf("Densidade Populacional: %d\n", densi1 < densi2);
    printf("PIB per Capita: %d\n", capi1 > capi2);
    printf("Super Poder: %d\n", super1 > super2);


        

    return 0;
}