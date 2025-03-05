#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

    char estado [3];
    //inserindo a variavel para inicial do estado composto de uma letra
    char codigo [3];
    //inserindo a variavel para o codigo da carta com 3 caracteres
    char nome [20];
    //inserindo a variavel para inserir o nome da cidade
    int populacao;
    //variavel para inserir o numero de habitantes
    float area;
    //variavel para inserir a area do estado
    float pib;
    //variavel para inserir o pib do estado
    int pontos;

    char estado2 [3];
    //inserindo a variavel para inicial do estado composto de uma letra
    char codigo2 [3];
    //inserindo a variavel para o codigo da carta com 3 caracteres
    char nome2 [20];
    //inserindo a variavel para inserir o nome da cidade
    int populacao2;
    //variavel para inserir o numero de habitantes
    float area2;
    //variavel para inserir a area do estado
    float pib2;
    //variavel para inserir o pib do estado
    int pontos2;

    
    printf("Jogo Carta Supertrunfo \n");
    printf("Carta 1 \n");

    printf("Qual a inicial do Estado? \n");
    scanf ("%s", &estado);
    
    printf("Qual codigo da Carta?\n");
    scanf ("%s", &codigo);
    
    printf ("Qual nome da cidade?\n");
    scanf ("%s", &nome);
    
    printf ("Qual a Populacao? \n");
    scanf ("%d", &populacao);

    printf ("Qual a area?\n");
    scanf ("%f", &area);

    printf ("Qual o PIB?\n");
    scanf ("%f", &pib);

    printf ("Quantos Pontos Turisticos? \n");
    scanf ("%d", &pontos);

    // Acima foram inseridos as entradas e saidas de informacoes utilizando print e scan f

    

    printf("SEGUNDA CARTA \n");
    
    printf("Qual a inicial do Estado? \n");
    scanf ("%s", &estado2);
    
    printf("Qual codigo da Carta?\n");
    scanf ("%s", &codigo2);
    
    printf ("Qual nome da cidade?\n");
    scanf ("%s", &nome2);
    
    printf ("Qual a Populacao? \n");
    scanf ("%d", &populacao2);

    printf ("Qual a area?\n");
    scanf ("%f", &area2);

    printf ("Qual o PIB?\n");
    scanf ("%f", &pib2);

    printf ("Quantos Pontos Turisticos? \n");
    scanf ("%d", &pontos2);

    printf ("Carta 01 \n");
    printf ("Estado:%s \n", estado);
    printf ("Codigo: %s %s \n",estado, codigo);
    printf ("Nome da Cidade: %s \n", nome);
    printf ("Populacao: %d \n", populacao);
    printf ("Area: %f \n", area);
    printf ("Pib: %f \n", pib);
    printf ("Pontos Turisticos: %d \n", pontos);

    //comandos para ser apresentado na tela as informacoes colhidas no comando anterior da primeira carta


    printf ("Carta 02 \n");
    printf ("Estado:%s \n", estado2);
    printf ("Codigo: %s %s \n",estado2, codigo2);
    printf ("Nome da Cidade: %s \n", nome2);
    printf ("Populacao: %d \n", populacao2);
    printf ("Area: %f \n", area2);
    printf ("Pib: %f \n", pib2);
    printf ("Pontos Turisticos: %d \n", pontos2);

    //comandos para ser apresentado na tela as informacoes colhidas no comando anterior da segunda carta





    return 0;
}
