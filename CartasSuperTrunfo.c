#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

// Variáveis  para cada atributo da cidade.

char estado1[20], estado2[20];
char codigo1[5], codigo2[5];
char nome1[20], nome2[20];
unsigned long int pop1, pop2;
float area1, area2;
float pib1, pib2;
int pontos1, pontos2;
float denspop1, denspop2;
float pibcap1, pibcap2;
float suppod1, suppod2;


int main() {
    
    // Cadastro das Cartas:
   
    printf ("Desafio Super Trunfo\n\n");
    printf ("Forneça os dados da Carta 1: \n\n");
    printf ("Forneça o Nome do Estado: ");
    scanf ("%s", estado1);
    printf ("Forneça o Código da Carta: ");
    scanf ("%s", codigo1);
    printf ("Forneça o Nome da Cidade: ");
    scanf ("%s", nome1);
    printf ("Forneça Quantidade da População: ");
    scanf ("%lu", &pop1);
    printf ("Forneça o Tamanho da Área: ");
    scanf ("%f", &area1);
    printf ("Forneça o PIB: ");
    scanf ("%f", &pib1);
    printf ("Forneça a Quantidade de Pontos Turísticos: ");
    scanf ("%d", &pontos1);

        printf("\n\n");
    
    printf ("Forneça os dados da Carta 2: \n\n");
    printf ("Forneça o Nome do Estado: ");
    scanf ("%s", estado2);
    printf ("Forneça o Código da Carta: ");
    scanf ("%s", codigo2);
    printf ("Forneça o Nome da Cidade: ");
    scanf ("%s", nome2);
    printf ("Forneça Quantidade da População: ");
    scanf ("%lu", &pop2);
    printf ("Forneça o Tamanho da Área: ");
    scanf ("%f", &area2);
    printf ("Forneça o PIB: ");
    scanf ("%f", &pib2);
    printf ("Forneça a Quantidade de Pontos Turísticos: ");
    scanf ("%d", &pontos2);

        printf("\n\n");

    //Cálculo de Atributos

    denspop1 = (float) pop1 / area1;
    denspop2 = (float) pop2 / area2;

    pibcap1 = pib1 / (float) pop1;
    pibcap2 = pib2 / (float) pop2;

    suppod1 = (1/denspop1) + (float) pop1 + (float) pontos1 + area1 + pib1 + pibcap1;
    suppod1 = (1/denspop1) + (float) pop2 + (float) pontos2 + area2 + pib2 + pibcap2;

    // Exibição dos Dados das Cartas:

    printf("------ Dados de Cada Carta ------\n");

    printf ("Dados da Carta 1: \n\n");
    printf ("Estado: " "%s",    estado1);
    printf ("\nCódigo da Carta: " "%s", codigo1);
    printf ("\nPopulação: ""%lu",    pop1);
    printf ("\nÁrea: ""%.2f", area1);
    printf ("\nPIB: " "%.2f", pib1);
    printf ("\nPontos Turísticos: ""%d",    pontos1);
    printf ("\nDensidade Populacional: ""%.2f", denspop1);
    printf ("\nPIB per Capita: ""%.2f", pib1);
    printf ("\nSuper Poder: ""%.2f", suppod1);

        printf ("\n\n\n");

    printf ("Dados da Carta 2: \n\n");
    printf ("Estado: " "%s",    estado2);
    printf ("\nCódigo da Carta: " "%s", codigo2);
    printf ("\nPopulação: ""%lu",    pop2);
    printf ("\nÁrea: ""%.2f", area2);
    printf ("\nPIB: " "%.2f", pib2);
    printf ("\nPontos Turísticos: ""%d",    pontos2);
    printf ("\nDensidade Populacional: ""%.2f", denspop2);
    printf ("\nPIB per Capita: ""%.2f", pib2);
    printf ("\nSuper Poder: ""%.2f", suppod2);

        printf ("\n\n\n");

    // Comparação das Cartas

    printf ("### Resultado da Comparação ###\n\n");
    printf ("Legenda: \n1 = Vitória da Carta 1\n0 = Vitória da Carta 2\n\n");

    printf ("Maior População: ""%lu", (pop1 > pop2));
    printf ("\nMaior Área: ""%d", (area1 > area2));
    printf ("\nMaior PIB: ""%d", (pib1 > pib2));
    printf ("\nMais Pontos Turísticos: ""%d", (pontos1 > pontos2));
    printf ("\nMelhor Densidade Populacional: ""%d", (denspop1 > denspop2));
    printf ("\nMaior PIB per Capita: ""%d", (pibcap1 > pibcap2));
    printf ("\nMaior Super Poder: ""%d", (suppod1 > suppod2));
       
    return 0;
}
