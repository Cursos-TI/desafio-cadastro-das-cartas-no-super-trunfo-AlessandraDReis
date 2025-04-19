// Criando as cartas do super trunfo
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
    // Variáveis da carta 01
    char estado_c1;
    char cod_carta_c1[4];
    char nm_cidade_c1[30];
    int populacao_c1;
    float area_c1;
    float pib_c1;
    int ptos_turisticos_c1;

    // Variáveis da carta 02
    char estado_c2;
    char cod_carta_c2[4];
    char nm_cidade_c2[30];
    int populacao_c2;
    float area_c2;
    float pib_c2;
    int ptos_turisticos_c2;


    // Entrada das informações da carta 01.
    printf("Olá! Vamos cadastrar as cartas do jogo!\nPrimeiro as informações da 1ª carta.\n");

    printf("Informe uma Letra de A a H para representar o Estado da 1ª carta:\n");
    scanf (" %c", &estado_c1);

    printf("Crie código para a 1ª carta:\n (Deve ser a letra anterior seguida de um número de 01 a 04.)\n");
    scanf("%s", &cod_carta_c1);
    cod_carta_c1[0] = toupper(cod_carta_c1[0]); // Deixa a 1ª letra maiúscula independente de como for digitado.

    getchar(); // Para remover o \n do scanf anterior.
    printf("Informe o nome da Cidade para a 1ª carta:\n");
    fgets(nm_cidade_c1, 30, stdin);
    nm_cidade_c1[strcspn(nm_cidade_c1, "\n")] = 0; // Remove o \n retirando uma quebra de linha após o nome da cidade.

    printf("Informe a população da Cidade, em milhões:\n");
    scanf("%d", &populacao_c1);

    printf("Informe a área da Cidade, em km²:\n");
    scanf("%f", &area_c1);

    printf("Informe o PIB da Cidade, em bilhões:\n");
    scanf("%f", &pib_c1);

    printf("Informe a quantidade de pontos turísticos da Cidade:\n");
    scanf("%d", &ptos_turisticos_c1);


    // Entrada das informações da carta 01.
    printf("Agora vamos cadastrar as informações da 2ª carta.\n");

    printf("Informe uma Letra de A a H para representar o Estado da 2ª carta:\n");
    scanf (" %c", &estado_c2);

    printf("Crie código para a 2ª carta:\n (Deve ser a letra anterior seguida de um número de 01 a 04.)\n");
    scanf("%s", &cod_carta_c2);
    cod_carta_c2[0] = toupper(cod_carta_c2[0]); // Deixa a 1ª letra maiúscula independente de como for digitado.

    getchar(); // Para remover o \n do scanf anterior.
    printf("Informe o nome da Cidade para a 2ª carta:\n");
    fgets(nm_cidade_c2, 30, stdin);
    nm_cidade_c2[strcspn(nm_cidade_c2, "\n")] = 0; // Remove o \n retirando uma quebra de linha após o nome da cidade.

    printf("Informe a população da Cidade, em milhões:\n");
    scanf("%d", &populacao_c2);

    printf("Informe a área da Cidade, em km²:\n");
    scanf("%f", &area_c2);

    printf("Informe o PIB da Cidade, em bilhões:\n");
    scanf("%f", &pib_c2);

    printf("Informe a quantidade de pontos turísticos da Cidade:\n");
    scanf("%d", &ptos_turisticos_c2);


    // Saída das informações das cartas 01 e 02.
    printf("Aqui estão as informações das cartas cadastradas:\n");
    printf("Carta 1:\nEstado: %c \nCódigo: %s \nNome da Cidade: %s\n", toupper(estado_c1), cod_carta_c1, nm_cidade_c1);
    printf("População: %d \nÁrea: %.2f km² \nPIB: %.2f bilhõs de reais \nNúmero de Pontos Turísticos: %d\n", populacao_c1, area_c1, pib_c1, ptos_turisticos_c1);

    printf("Carta 2:\nEstado: %c \nCódigo: %s \nNome da Cidade: %s\n", toupper(estado_c2), cod_carta_c2, nm_cidade_c2);
    printf("População: %d \nÁrea: %.2f km² \nPIB: %.2f bilhõs de reais \nNúmero de Pontos Turísticos: %d\n", populacao_c2, area_c2, pib_c2, ptos_turisticos_c2);


    return 0;
}