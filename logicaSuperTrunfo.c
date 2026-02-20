#include <stdio.h>


int main() {
   
   
    char estado1 = 'A';
    char codigo1[4] = "A01";
    char cidade1[50] = "Sao Paulo";
    int populacao1 = 12325000;
    float area1 = 1521.11;
    float PIB1 = 699.28;
    int pontos1 = 50;
    float densidade1;
    float inverso1;

    char estado2 = 'B';
    char codigo2[4] = "B02";
    char cidade2[50] = "Rio de Janeiro";
    int populacao2 = 6748000;
    float area2 = 1200.25;
    float PIB2 = 300.50;
    int pontos2 = 30;
    float densidade2;
    float inverso2;

    printf("\nINSERIR DADOS DA CARTA 1\n");

    printf("Digite o código da cidade:\n");
    scanf("%s", &codigo1);

    printf("Digite a cidade:\n");
    scanf("%s", cidade1);
    
    printf("Digite a população:\n");
    scanf("%d", &populacao1);

    printf("Digite a area:\n");
    scanf("%f", &area1);

    printf("Digite o PIB:\n");
    scanf("%f", &PIB1);
    
    printf("Digite a quantidade de pontos turísticos da cidade:\n");
    scanf("%d", &pontos1);
    
    densidade1 = populacao1 / area1;

    printf("\nINSERIR DADOS DA CARTA 2\n");

    printf("Digite o código da cidade:\n");
    scanf("%s", &codigo2);

    printf("Digite a cidade:\n");
    scanf("%s", cidade2);
    
    printf("Digite a população:\n");
    scanf("%d", &populacao2);

    printf("Digite a area:\n");
    scanf("%f", &area2);

    printf("Digite o PIB:\n");
    scanf("%f", &PIB2);
    
    printf("Digite a quantidade de pontos turísticos da cidade:\n");
    scanf("%d", &pontos2);
    
    densidade2 = populacao2 / area2;
   
    printf("Comparação de Cartas:\n");
   
    if (populacao1 > populacao2) {
        printf("A Cidade de São Paulo tem uma população maior que a cidade do Rio de Janeiro.\n");
    } else {
        printf("A Cidade do Rio de Janeiro tem a população maior que a cidade de São Paulo.\n");
    }  

    printf("\n NÍVEL AVENTUREIRO\n");
    
    int atributo;
    scanf("%d", &atributo);

    printf("\n1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turísticos\n");
    printf("5 - Densidade\n");


    printf("\nEscolha o atributo: ");
    scanf("%d", &atributo);
    
    switch(atributo){
        
    case 1:
        if (populacao1 > populacao2)
        printf("A carta 1 venceu\n");
        else if (populacao2 > populacao1)
        printf("A carta 2 venceu\n");
        else 
        printf("Deu empate\n");
        break;

    case 2:
        if (area1 > area2)
            printf("Carta 1 venceu em Área!\n");
        else if (area2 > area1)
            printf("Carta 2 venceu em Área!\n");
        else
            printf("Empate em Área!\n");
        break;

    case 3:
        if (PIB1 > PIB2)
            printf("Carta 1 venceu em PIB!\n");
        else if (PIB2 > PIB1)
            printf("Carta 2 venceu em PIB!\n");
        else
            printf("Empate em PIB!\n");
        break;

    case 4:
        if (pontos1 > pontos2)
            printf("Carta 1 venceu em Pontos Turísticos!\n");
        else if (pontos2 > pontos1)
            printf("Carta 2 venceu em Pontos Turísticos!\n");
        else
            printf("Empate em Pontos Turísticos!\n");
        break;

    case 5:

        if (densidade1 < densidade2)
        printf("Carta 1 venceu em Densidade!\n");
        else if (densidade2 < densidade1)
        printf("Carta 2 venceu em Densidade!\n");
        else
        printf("Empate em Densidade!\n");
        break;


    }






    return 0;
}
;