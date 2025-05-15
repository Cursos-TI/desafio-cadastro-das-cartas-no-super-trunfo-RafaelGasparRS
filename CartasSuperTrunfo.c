#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

// Variáveis  para cada atributo da cidade.

char estado1[20], estado2[20];
char codigo1[5], codigo2[5];
char nome1[20], nome2[20];
int pop1, pop2;
float area1, area2;
float pib1, pib2;
int pontos1, pontos2;


void main() {
    
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
    scanf ("%i", &pop1);
    printf ("Forneça o Tamanho da Área: ");
    scanf ("%f", &area1);
    printf ("Forneça o PIB: ");
    scanf ("%f", &pib1);
    printf ("Forneça a Quantidade de Pontos Turísticos: ");
    scanf ("%i", &pontos1);
    printf("\n\n");
    
    printf ("Forneça os dados da Carta 2: \n\n");
    printf ("Forneça o Nome do Estado: ");
    scanf ("%s", estado2);
    printf ("Forneça o Código da Carta: ");
    scanf ("%s", codigo2);
    printf ("Forneça o Nome da Cidade: ");
    scanf ("%s", nome2);
    printf ("Forneça Quantidade da População: ");
    scanf ("%i", &pop2);
    printf ("Forneça o Tamanho da Área: ");
    scanf ("%f", &area2);
    printf ("Forneça o PIB: ");
    scanf ("%f", &pib2);
    printf ("Forneça a Quantidade de Pontos Turísticos: ");
    scanf ("%i", &pontos2);

    printf("\n\n");

    // Exibição dos Dados das Cartas:

    printf ("Dados da Carta 1: \n\n");
    printf ("Estado: " "%s",    estado1);
    printf ("\nCódigo da Carta: " "%s", codigo1);
    printf ("\nPopulação: ""%i",    pop1);
    printf ("\nÁrea: ""%.2f", area1);
    printf ("\nPIB: " "%.2f", pib1);
    printf ("\nPontos Turísticos: ""%i",    pontos1);

    printf ("\n\n\n");

    printf ("Dados da Carta 2: \n\n");
    printf ("Estado: " "%s",    estado2);
    printf ("\nCódigo da Carta: " "%s", codigo2);
    printf ("\nPopulação: ""%i",    pop2);
    printf ("\nÁrea: ""%.2f", area2);
    printf ("\nPIB: " "%.2f", pib2);
    printf ("\nPontos Turísticos: ""%i",    pontos2);

   
    return 0;
}
