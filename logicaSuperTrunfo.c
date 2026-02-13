#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    char estado1 = 'A';
    char codigo1[4] = "A01";
    char cidade1[50] = "Sao Paulo";
    int populacao1 = 12325000;
    float area1 = 1521.11;
    float PIB1 = 699.28;
    int pontos1 = 50;
     
    char estado2 = 'B';
    char codigo2[4] = "B02";
    char cidade2[50] = "Rio de Janeiro";
    int populacao2 = 6748000;
    float area2 = 1200.25;
    float PIB2 = 300.50;
    int pontos2 = 30;

    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    printf("\nINSERIR DADOS DA CARTA 1\n");

    printf("Digite o código da cidade:\n");
    scanf("%s", &codigo1);

    printf("Digite a cidade:\n");
    scanf("%s", &cidade1);
    
    printf("Digite a população:\n");
    scanf("%d", &populacao1);

    printf("Digite a area:\n");
    scanf("%f", &area1);

    printf("Digite o PIB:\n");
    scanf("%f", &PIB1);
    
    printf("Digite a quantidade de pontos turísticos da cidade:\n");
    scanf("%d", &pontos1);
    
    printf("\nINSERIR DADOS DA CARTA 2\n");

    printf("Digite o código da cidade:\n");
    scanf("%s", &codigo2);

    printf("Digite a cidade:\n");
    scanf("%s", &cidade2);
    
    printf("Digite a população:\n");
    scanf("%d", &populacao2);

    printf("Digite a area:\n");
    scanf("%f", &area2);

    printf("Digite o PIB:\n");
    scanf("%f", &PIB2);
    
    printf("Digite a quantidade de pontos turísticos da cidade:\n");
    scanf("%d", &apontos2);

   
    printf("Comparação de Cartas:\n")
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.
    if (populacao1 > populacao2) {
        printf("A Cidade de São Paulo tem uma população maior que a cidade do Rio de Janeiro.\n");
    } else {
        printf("A Cidade do Rio de Janeiro tem a população maior que a cidade de São Paulo.\n");
    }  

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.
       
    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
